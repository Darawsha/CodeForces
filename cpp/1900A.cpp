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
    string a;
    cin >> a;
    int ans = 0;
    bool f = false;
    for (int i = 0; i < n; i++) {
      if (a[i] == '.')
        ans++;
      if (i + 2 < n && a[i] == '.' && a[i + 1] == '.' && a[i + 2] == '.') {
        f = true;
      }
    }
    if (f)
      cout << 2 << endl;
    else
      cout << ans << endl;
  }

  return 0;
}
