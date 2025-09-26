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
    vector<int> v(n + 1, 0);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= n)
        v[a[i]]++;
    }

    int notFound = 0;
    for (int i = 0; i < k; i++) {
      if (v[i] == 0)
        notFound++;
    }

    int count = v[k];
    cout << max(notFound, count) << endl;
  }
  return 0;
}
