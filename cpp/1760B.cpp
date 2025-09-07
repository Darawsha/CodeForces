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
    string s;
    cin >> n;
    cin >> s;
    int res = 0;
    char a = 'a';
    for (int i = 0; i < n; i++) {
      res = max(res, s[i] - a);
    }
    cout << res + 1 << endl;
  }
  return 0;
}
