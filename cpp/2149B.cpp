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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    ll maxx = 0;
    for (int i = 0; i < n; i += 2) {
      maxx = max(maxx, a[i + 1] - a[i]);
    }

    cout << maxx << endl;
  }
  return 0;
}
