#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    string s = "";
    cin >> s;
    if (s.size() > 10) {
      cout << s[0] << (s.size() - 2) << s[s.size() - 1] << endl;
    } else
      cout << s << endl;
  }
  return 0;
}
