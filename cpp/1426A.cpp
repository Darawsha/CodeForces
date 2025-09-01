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

  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
      cout << 1 << endl;
      continue;
    }
    int res = 1 + ((n - 2) + (x - 1)) / x;
    cout << res << endl;
  }

  return 0;
}
