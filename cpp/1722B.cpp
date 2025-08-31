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
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    bool ok = true;
    for (int i = 0; i < n; i++) {
      if (s1[i] == s2[i])
        continue;
      if ((s1[i] == 'G' || s1[i] == 'B') && (s2[i] == 'G' || s2[i] == 'B'))
        continue;
      ok = false;
      break;
    }
    if (ok) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
