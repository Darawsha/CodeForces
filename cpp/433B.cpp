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

  int n;
  cin >> n;

  vector<ll> a(n + 1), va(n + 1), vb(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  vector<ll> b = a;
  sort(b.begin() + 1, b.end());

  for (int i = 1; i <= n; i++) {
    va[i] = va[i - 1] + a[i];
    vb[i] = vb[i - 1] + b[i];
  }

  int m;
  cin >> m;
  while (m--) {
    int type, l, r;
    cin >> type >> l >> r;
    if (type == 1) {
      cout << va[r] - va[l - 1] << endl;
    } else {
      cout << vb[r] - vb[l - 1] << endl;
    }
  }

  return 0;
}
