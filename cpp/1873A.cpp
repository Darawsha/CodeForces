#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (s == "abc" || s == "acb" || s == "bac") {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
