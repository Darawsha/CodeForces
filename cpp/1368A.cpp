#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'
// not mine solution !!
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
    ll a, b, n;
    cin >> a >> b >> n;

    if (a > b)
      swap(a, b);
    int steps = 0;
    while (b <= n) {
      a += b;
      if (a > b)
        swap(a, b);
      steps++;
    }

    cout << steps << endl;
  }

  return 0;
}
