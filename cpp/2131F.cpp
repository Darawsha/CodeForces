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
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<ll> D(n), E(n);
    ll A0 = 0, A1 = 0, B0 = 0, B1 = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == '0')
        A0++;
      else
        A1++;
      if (b[i] == '0')
        B0++;
      else
        B1++;
      D[i] = A0 - A1;
      E[i] = B0 - B1;
    }

    vector<ll> Ds = D, Es = E;
    sort(Ds.begin(), Ds.end());
    sort(Es.begin(), Es.end());

    ll res = 0;
    A0 = A1 = B0 = B1 = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == '0')
        A0++;
      else
        A1++;
      ll pos = lower_bound(Es.begin(), Es.end(), -D[i]) - Es.begin();
      ll cy = n - pos;
      res += A1 * cy + A0 * (n - cy);
    }

    for (int i = 0; i < n; i++) {
      if (b[i] == '0')
        B0++;
      else
        B1++;
      ll pos = lower_bound(Ds.begin(), Ds.end(), -E[i]) - Ds.begin();
      ll cx = n - pos;
      res += B1 * cx + B0 * (n - cx);
    }

    cout << res << "\n";
  }

  return 0;
}
