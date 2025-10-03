#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

void file_io() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
}

void solve() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> ans(n + 1);
  {
    vector<int> seen(1e5 + 1, 0);
    int num = 0;

    for (int i = n - 1; i >= 0; i--) {
      if (!seen[a[i]])
        num++;
      seen[a[i]] = 1;
      ans[i + 1] = num;
    }
  }
  for (int i = 0; i < m; i++) {
    int l;
    cin >> l;
    cout << ans[l] << endl;
  }
}

int main() {
  file_io();
  fast_io();

  solve();

  return 0;
}
