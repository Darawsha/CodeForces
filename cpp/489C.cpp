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

  int m, s;
  cin >> m >> s;

  if (s == 0) {
    if (m == 1)
      cout << 0 << " " << 0 << endl;
    else
      cout << -1 << " " << -1 << endl;
    return 0;
  }

  if (s > 9 * m) {
    cout << -1 << " " << -1 << endl;
    return 0;
  }

  int sum = s;
  string larg = "";
  for (int i = 0; i < m; i++) {
    int num = min(9, sum);
    larg += char(num + '0');
    sum -= num;
  }

  sum = s;
  string small(m, '0');
  for (int i = m - 1; i >= 0; i--) {
    int num = min(9, sum);
    small[i] = char(num + '0');
    sum -= num;
  }

  if (small[0] == '0') {
    for (int i = 1; i < m; i++) {
      if (small[i] > '0') {
        small[i]--;
        small[0] = '1';
        break;
      }
    }
  }

  cout << small << " " << larg << endl;
  return 0;
}
