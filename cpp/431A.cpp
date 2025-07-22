#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string s;
  cin >> s;

  int total = 0;
  for (char ch : s) {
    if (ch == '1')
      total += a;
    else if (ch == '2')
      total += b;
    else if (ch == '3')
      total += c;
    else if (ch == '4')
      total += d;
  }
  cout << total << endl;

  return 0;
}
