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

    vector<int> a(n), b(n), c(n, 0);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];

    if (a[n - 1] != b[n - 1]) {
      cout << "NO\n";
      continue;
    }

    bool possible = true;
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] == b[i])
        continue;
      if (b[i] == (a[i] ^ a[i + 1])) {
        c[i] = 1;
        continue;
      }
      if (i + 1 < n - 1 && c[i + 1]) {
        a[i + 1] ^= a[i + 2];
      }
      if (b[i] == (a[i] ^ a[i + 1])) {
        c[i] = 1;
        continue;
      }
      possible = false;
      break;
    }

    cout << (possible ? "YES\n" : "NO\n");
  }

  return 0;
}
