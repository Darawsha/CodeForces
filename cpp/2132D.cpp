#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
#define ull unsigned long long
using namespace std;
#define endl '\n'

static unsigned long long p10[19];
static unsigned long long prefDigits[19];

unsigned long long sum_full_0_to_10d_minus1(int d) {
  if (d <= 0)
    return 0;
  return (unsigned long long)d * 45ULL * p10[d - 1];
}

unsigned long long sum_digits_upto(unsigned long long n) {
  if (n < 10)
    return n * (n + 1) / 2;
  int d = 0;
  while (d + 1 < 19 && p10[d + 1] <= n)
    d++;
  unsigned long long p = p10[d];
  unsigned long long msd = n / p;
  unsigned long long rest = n % p;
  __uint128_t res = 0;
  res += (__uint128_t)msd * sum_full_0_to_10d_minus1(d);
  res += (__uint128_t)(msd * (msd - 1) / 2) * p;
  res += (__uint128_t)msd * (rest + 1);
  res += sum_digits_upto(rest);
  return (unsigned long long)res;
}

unsigned long long digits_upto(unsigned long long n) {
  if (n == 0)
    return 0;
  int d = 0;
  while (d + 1 < 19 && p10[d + 1] <= n)
    d++;

  unsigned long long prev = prefDigits[d];
  return prev + (unsigned long long)(d + 1) * (n - p10[d] + 1);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  p10[0] = 1;
  for (int i = 1; i < 19; i++)
    p10[i] = p10[i - 1] * 10ULL;
  prefDigits[0] = 0;
  for (int d = 1; d < 19; d++) {
    prefDigits[d] =
        prefDigits[d - 1] + (unsigned long long)d * 9ULL * p10[d - 1];
  }

  int t;
  cin >> t;
  while (t--) {

    unsigned long long k;
    cin >> k;

    unsigned long long lo = 0, hi = (unsigned long long)1e17;
    while (lo < hi) {
      unsigned long long mid = lo + ((hi - lo) >> 1) + 1;
      if (digits_upto(mid) <= k)
        lo = mid;
      else
        hi = mid - 1;
    }
    unsigned long long N = lo;
    unsigned long long used = digits_upto(N);
    unsigned long long r = k - used;

    unsigned long long result = sum_digits_upto(N);
    if (r) {
      string s = to_string(N + 1);
      for (unsigned long long i = 0; i < r; i++)
        result += (s[i] - '0');
    }

    cout << result << endl;
  }

  return 0;
}
