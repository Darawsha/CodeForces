#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  const int MAX = 1000000;
  vector<char> isPrime(MAX + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int p = 2; 1LL * p * p <= MAX; ++p)
    if (isPrime[p])
      for (int q = p * p; q <= MAX; q += p)
        isPrime[q] = false;

  int n;
  cin >> n;
  while (n--) {
    unsigned long long x;
    cin >> x;
    unsigned long long r = (unsigned long long)(sqrtl((long double)x) + 0.5L);
    if (r >= 2 && r <= (unsigned long long)MAX && r * r == x && isPrime[(int)r])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
