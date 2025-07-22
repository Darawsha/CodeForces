#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int year = stoi(s);
    int sqrt_year = (int)sqrt(year);

    if (sqrt_year * sqrt_year != year) {
      cout << -1 << endl;
      continue;
    }

    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(2, 2));
    if (a + b == sqrt_year) {
      cout << a << " " << b << endl;
    } else {
      cout << 0 << " " << sqrt_year << endl;
    }
  }
  return 0;
}
