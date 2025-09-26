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
    string s;
    cin >> n >> s;

    ll res = LLONG_MAX;
    string t = "ab";
    for (char ch : t) {
      vector<int> p;
      for (int i = 0; i < n; ++i)
        if (s[i] == ch)
          p.push_back(i);

      int k = p.size();
      if (k <= 1) {
        res = 0;
        continue;
      }

      int m = k / 2;
      ll med = p[m] - m;
      ll sum = 0;
      for (int i = 0; i < k; ++i)
        sum += abs((ll)p[i] - i - med);

      res = min(res, sum);
    }

    cout << res << endl;
  }

  return 0;
}
