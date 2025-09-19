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
    int a;
    cin >> a;
    int eta = 180 - a;
    if (eta > 0 && 360 % eta == 0) {
      int n = 360 / eta;
      cout << (n >= 3 ? "YES" : "NO") << "\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
