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

  string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c;
  string str;
  cin >> c >> str;
  string res = "";
  if (c == 'R') {
    for (char ch : str) {
      int idx = s.find(ch);
      res += s[idx - 1];
    }
  } else if (c == 'L') {
    for (char ch : str) {
      int idx = s.find(ch);
      res += s[idx + 1];
    }
  }
  cout << res << endl;
  return 0;
}
