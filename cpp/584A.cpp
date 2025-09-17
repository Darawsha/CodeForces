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
  int n, t;
  cin >> n >> t;

  if (t == 10 && n == 1) {
    cout << -1 << endl;
    return 0;
  }

  string ans = "";
  if (t == 10) {
    ans += '1';
    for (int i = 0; i < n - 1; i++) {
      ans += '0';
    }
  } else {
    ans += char('0' + t);
    for (int i = 1; i < n; i++) {
      ans += '0';
    }
  }

  cout << ans << endl;
  return 0;
}
