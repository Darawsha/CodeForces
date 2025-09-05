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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
      ans = min(ans, a[i + 1] - a[i]);
    }
    cout << ans << endl;
  }

  return 0;
}
