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
    vector<tuple<int, int, int>> v;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (a <= 10)
        v.push_back({i + 1, a, b});
    }
    if (v.size() == 0) {
      cout << "0" << endl;
      continue;
    }

    int best = -1, top = -1;
    for (auto [idx, a, b] : v) {
      if (b > top) {
        top = b;
        best = idx;
      }
    }
    cout << best << endl;
  }

  return 0;
}
