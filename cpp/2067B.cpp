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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> c(n + 3, 0);
    for (int x : a)
      c[x]++;

    for (int x = 1; x < n; x++) {
      if (c[x] > 2) {
        int pls = c[x] - 2;
        c[x] = 2;
        c[x + 1] += pls;
      }
    }

    bool ok = true;
    for (int i = 1; i <= n; i++) {
      if (c[i] % 2 != 0) {
        ok = false;
        break;
      }
    }

    cout << (ok ? "YES" : "NO") << endl;
  }

  return 0;
}
