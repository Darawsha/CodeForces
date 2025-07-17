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
    int x;
    cin >> x;

    set<char> digits_x;
    string sx = to_string(x);
    for (char ch : sx) {
      digits_x.insert(ch);
    }

    int y = 0;
    while (true) {
      string sy = to_string(y);
      bool found = false;
      for (char ch : sy) {
        if (digits_x.count(ch)) {
          found = true;
          break;
        }
      }
      if (found) {
        cout << y << endl;
        break;
      }
      y++;
    }
  }

  return 0;
}
