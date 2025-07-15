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

    bool able = false;
    string s;
    cin >> s;
    if (s == "abc") {
      cout << "YES" << endl;
      continue;
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        swap(s[i], s[j]);
        if (s == "abc") {
          able = true;
        }
        swap(s[i], s[j]);
      }
    }
    if (able) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
