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

  int n, m;
  cin >> n >> m;
  int maxSteps = n;
  int minSteps = (n + 1) / 2;
  int res = 0;
  bool found = false;
  for (int i = minSteps; i <= maxSteps; i++) {
    if (i % m == 0) {
      res = i;
      found = true;
      break;
    }
  }
  if (!found)
    res = -1;
  cout << res << endl;
  return 0;
}
