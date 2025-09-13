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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    vector<int> b(n + 1);

    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= n; i++)
      cin >> a[i] >> b[i];

    ll res = 0;
    for (int i = 1; i <= n; i++) {
      ll d = a[i] - a[i - 1];
      if (b[i] == b[i - 1]) {
        res += (d / 2) * 2;
      } else {
        res += (d % 2 ? d : d - 1);
      }
    }

    res += m - a[n];

    cout << res << endl;
  }

  return 0;
}
