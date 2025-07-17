#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    int digit = s[i] - '0';
    int inverted = 9 - digit;

    if (inverted < digit && !(i == 0 && inverted == 0)) {
      s[i] = char(inverted + '0');
    }
  }

  cout << s << endl;
  return 0;
}
