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
    int minIndex_x = INT_MAX, maxIndex_x = INT_MIN;
    int minIndex_y = INT_MAX, maxIndex_y = INT_MIN;
    int side = 0;
    for (int i = 0; i < 4; i++) {
      int x, y;
      cin >> x >> y;
      minIndex_x = min(minIndex_x, x);
      maxIndex_x = max(maxIndex_x, x);
      minIndex_y = min(minIndex_y, y);
      maxIndex_y = max(maxIndex_y, y);
    }
    side = max(maxIndex_x - minIndex_x, maxIndex_y - minIndex_y);
    cout << side * side << endl;
  }
  return 0;
}
