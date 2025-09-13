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
    int x, n;
    cin >> x >> n;
    if (n % 2 == 0) {
      cout << 0 << endl;
    } else {

      cout << x << endl;
    }
  }

  return 0;
}
