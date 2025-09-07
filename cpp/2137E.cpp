#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];

    vector<int> f(n + 3, 0);
    for (int x : a)
      ++f[x];

    int M = 0;
    while (f[M] > 0)
      ++M;

    ll cnt1 = 0, sumU = 0;
    for (int x = 0; x < M; x++)
      if (f[x] == 1) {
        ++cnt1;
        sumU += x;
      }
    ll R = n - cnt1;
    ll S1 = sumU + R * 1LL * M;

    if (k == 1 || R == 0) {
      cout << S1 << endl;
      continue;
    }

    int t0 = 0;
    while (f[t0] == 1)
      ++t0;

    ll ans;
    if (t0 < M) {
      ll sumSmall = t0 * (t0 - 1) / 2;
      ll Seven = sumSmall + (n - t0) * t0;
      ll Sodd = sumSmall + (n - t0) * (t0 + 1);
      ans = (k % 2 == 0) ? Seven : Sodd;
    } else {
      ll cntSmall = M + (R == 1 ? 1 : 0);
      ll sumSmall = sumU + (R == 1 ? M : 0);
      ll S2 = sumSmall + (n - cntSmall) * (M + 1);
      ans = (R == 1) ? S2 : ((k % 2 == 0) ? S2 : S1);
    }

    cout << ans << endl;
  }
  return 0;
}
