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
    string s;
    cin >> s;
    int u, d, l, r;
    u = d = l = r = 0;
    int x = 0, y = 0;
    bool ok = false;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'U')
        y++;
      else if (s[i] == 'D')
        y--;
      else if (s[i] == 'L')
        x--;
      else
        x++;
      if (x == 1 and y == 1) {
        ok = true;
        break;
      }
    }

    if (ok) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  }

  return 0;
}
