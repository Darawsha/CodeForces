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
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < m; i++)
      cin >> b[i];

    cout << (n + m) << endl;
  }

  return 0;
}
