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
    vector<int> count(n + 1, 0);
    int res = -1;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      count[x]++;
      if (count[x] == 3 && res == -1) {
        res = x;
      }
    }

    cout << res << endl;
  }
  return 0;
}
