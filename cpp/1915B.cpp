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
    string a, b, c;
    cin >> a >> b >> c;
    vector<string> g = {a, b, c};
    char ans = 'A';
    for (int r = 0; r < 3; ++r) {
      for (int i = 0; i < 3; ++i) {
        if (g[r][i] == '?') {
          bool ok[3] = {false, false, false};
          for (int j = 0; j < 3; j++) {
            char ch = g[r][j];
            if (ch == '?')
              continue;
            if (ch == 'A')
              ok[0] = true;
            else if (ch == 'B')
              ok[1] = true;
            else if (ch == 'C')
              ok[2] = true;
          }
          if (!ok[0])
            ans = 'A';
          else if (!ok[1])
            ans = 'B';
          else
            ans = 'C';
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
