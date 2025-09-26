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
    int count0 = 0, countm1 = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 0)
        count0++;
      if (x == -1)
        countm1++;
    }

    int res = count0 + (countm1 % 2) * 2;
    cout << res << endl;
  }

  return 0;
}
