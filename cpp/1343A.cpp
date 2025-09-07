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
    ll n;
    cin >> n;
    for (int k = 2; k < 64; k++) {
      ll d = (1LL << k) - 1;
      if (n % d == 0) {
        cout << n / d << endl;
        break;
      }
    }
  }
  return 0;
}
