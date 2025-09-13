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

    vector<int> count(n + 1, 0);
    int G = 0;
    int ans = 0;
    vector<int> result;

    for (int i = 0; i < n; i++) {
      int x = a[i];
      vector<int> dvs;
      for (int d = 1; d * d <= x; d++) {
        if (x % d == 0) {
          if (d <= n) {
            count[d]++;
            dvs.push_back(d);
          }
          int other = x / d;
          if (other != d && other <= n) {
            count[other]++;
            dvs.push_back(other);
          }
        }
      }

      int pg = G;
      G = gcd(G, x);

      if (G != pg) {
        ans = 0;
        for (int m = G * 2; m <= n; m += G)
          ans = max(ans, count[m]);
      } else {
        for (int d : dvs)
          if (d > G && d % G == 0)
            ans = max(ans, count[d]);
      }

      result.push_back(ans);
    }

    for (int i = 0; i < n; i++) {
      if (i)
        cout << ' ';
      cout << result[i];
    }
    cout << endl;
  }

  return 0;
}
