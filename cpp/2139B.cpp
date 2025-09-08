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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int mx = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mx = max(mx, a[i]);
    }

    vector<int> count(mx + 1, 0);
    for (int x : a)
      count[x]++;

    ll ans = 0;
    int rem = min(n, m);
    int fa = m;

    for (int val = mx; val >= 1 && rem > 0; val--) {
      int take = min(count[val], rem);
      for (int i = 0; i < take; i++) {
        ans += 1LL * val * fa;
        fa--;
      }
      rem -= take;
    }

    cout << ans << endl;
  }

  return 0;
}
