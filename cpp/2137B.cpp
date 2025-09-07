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
    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];

    for (int i = 0; i < n; i++) {
      int q = (n + 1) - p[i];
      cout << q << (i + 1 == n ? '\n' : ' ');
    }
  }
  return 0;
}
