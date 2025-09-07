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
    ll a, b;
    cin >> a >> b;

    ll ans = -1;
    if (b & 1) {
      if (a & 1)
        ans = a * b + 1;
    } else {
      if ((a & 1) == 0) {
        ans = a * (b / 2) + 2;
      } else {
        if ((b % 4) == 0)
          ans = a * (b / 2) + 2;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
