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
    int n, x;
    cin >> n >> x;
    int maxN = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    a.insert(a.begin(), 0);
    for (int i = 1; i < a.size(); i++) {
      maxN = max(maxN, a[i] - a[i - 1]);
    }
    maxN = max(maxN, 2 * (x - a.back()));
    cout << maxN << endl;
  }

  return 0;
}
