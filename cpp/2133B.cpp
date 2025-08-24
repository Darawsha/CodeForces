#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
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
    int n;
    cin >> n;
    vector<ll> g(n);
    for (int i = 0; i < n; i++)
      cin >> g[i];
    sort(g.begin(), g.end());

    ll ans = 0;
    if (n % 2 == 0) {
      for (int i = 1; i < n; i += 2)
        ans += g[i];
    } else {
      for (int i = 0; i < n; i += 2)
        ans += g[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
