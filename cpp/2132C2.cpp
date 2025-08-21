#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;

    vector<ll> d;
    ll m = n;
    while (m > 0) {
      d.push_back(m % 3);
      m /= 3;
    }
    if (d.empty())
      d.push_back(0);
    int top = (int)d.size();

    ll deals = 0;
    for (ll v : d)
      deals += v;
    if (deals > k) {
      cout << -1 << endl;
      continue;
    }

    vector<ll> p(top, 1);
    for (int i = 1; i < top; ++i)
      p[i] = p[i - 1] * 3LL;

    long long res = 0;
    for (int i = 0; i < top; ++i) {
      ll cost_i = 3LL * p[i] + (i ? 1LL * i * p[i - 1] : 0LL);
      res += d[i] * cost_i;
    }

    ll rem = k - deals;
    for (int i = top - 1; i >= 1 && rem >= 2; --i) {
      if (d[i] == 0)
        continue;
      ll s = min(d[i], rem / 2);
      if (s == 0)
        continue;
      res -= s * p[i - 1];
      d[i] -= s;
      d[i - 1] += 3 * s;
      rem -= 2 * s;
    }

    cout << res << endl;
  }

  return 0;
}
