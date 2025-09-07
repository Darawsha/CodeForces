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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
      cin >> b[i];

    vector<vector<int>> pos(n + 1);
    for (int i = 0; i < n; ++i)
      pos[b[i]].push_back(i);

    vector<int> a(n, 0);
    int label = 1;
    bool ok = true;

    for (int k = 1; k <= n; ++k) {
      int cnt = (int)pos[k].size();
      if (cnt % k != 0) {
        ok = false;
        break;
      }
      for (int i = 0; i < cnt; i += k) {
        for (int j = 0; j < k; ++j)
          a[pos[k][i + j]] = label;
        ++label;
      }
    }

    if (!ok) {
      cout << -1 << endl;
    } else {
      for (int i = 0; i < n; ++i)
        cout << a[i] << (i + 1 == n ? endl : ' ');
    }
  }
  return 0;
}
