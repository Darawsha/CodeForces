#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll n, a, b;
    cin >> n >> a >> b;
    if ((n % 2) != (b % 2)) {
      cout << "NO" << endl;
      continue;
    }
    if (a <= b || (a >= b + 2 && (a % 2) == (n % 2))) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
