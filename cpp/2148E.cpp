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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> total(n + 1, 0);
    for (int i = 0; i < n; i++)
      total[a[i]]++;

    bool ok = true;
    for (int v = 1; v <= n; ++v) {
      if (total[v] % k != 0) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      cout << 0 << endl;
      continue;
    }

    vector<int> cap(n + 1, 0);
    for (int v = 1; v <= n; ++v)
      cap[v] = total[v] / k;

    vector<int> cnt(n + 1, 0);
    ll res = 0;
    int L = 0;
    for (int R = 0; R < n; ++R) {
      int v = a[R];
      cnt[v]++;
      while (cnt[v] > cap[v]) {
        cnt[a[L]]--;
        ++L;
      }
      res += (R - L + 1);
    }

    cout << res << endl;
  }

  return 0;
}
