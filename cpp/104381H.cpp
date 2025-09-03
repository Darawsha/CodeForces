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

  ll n;
  cin >> n;

  vector<char> allowed = {'1', '3', '5', '9'};
  string s = to_string(n);
  string t = s;
  bool okey = false;

  for (size_t i = 0; i < s.size(); ++i) {
    char og = s[i];
    char nxt = 0;
    for (char d : allowed) {
      if (d >= og && (nxt == 0 || d < nxt)) {
        nxt = d;
      }
    }
    if (nxt != 0) {
      t[i] = nxt;
      if (nxt > og) {
        okey = true;
        for (size_t j = i + 1; j < s.size(); ++j) {
          t[j] = allowed[0];
        }
        break;
      }
    }
  }

  ll result = stoll(t);
  cout << result << "\n";

  return 0;
}
