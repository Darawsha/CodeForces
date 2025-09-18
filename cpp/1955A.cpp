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
    int n, a, b;
    cin >> n >> a >> b;
    if (n % 2 == 0) {
      cout << (n / 2) * min(2 * a, b) << endl;
      continue;
    }
    cout << (n / 2) * min(2 * a, b) + a << endl;
  }

  return 0;
}
