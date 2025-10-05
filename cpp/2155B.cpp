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
  int n, k;
  cin >> n >> k;
  int N = n * n;
  int m = N - k;

  if (m == 1) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;

  vector<pair<int, int>> path;
  path.reserve(N);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; j++)
        path.pb({i, j});
    } else {
      for (int j = n - 1; j >= 0; j--)
        path.pb({i, j});
    }
  }

  vector<string> g(n, string(n, 'R'));

  auto setDir = [&](pii a, pii b) {
    int r1 = a.first, c1 = a.second;
    int r2 = b.first, c2 = b.second;
    if (r2 == r1) {
      if (c2 == c1 + 1)
        g[r1][c1] = 'R';
      else if (c2 == c1 - 1)
        g[r1][c1] = 'L';
    } else if (c2 == c1) {
      if (r2 == r1 + 1)
        g[r1][c1] = 'D';
      else if (r2 == r1 - 1)
        g[r1][c1] = 'U';
    }
  };
  if (m >= 2) {
    setDir(path[0], path[1]);
    setDir(path[1], path[0]);
    for (int i = 2; i < m; i++)
      setDir(path[i], path[i - 1]);
  }

  int start = (m == 0 ? 0 : m);
  for (int i = start; i < N - 1; i++)
    setDir(path[i], path[i + 1]);

  if (m != N) {
    auto [r, c] = path[N - 1];
    if (r == 0)
      g[r][c] = 'U';
    else if (r == n - 1)
      g[r][c] = 'D';
    else if (c == 0)
      g[r][c] = 'L';
    else
      g[r][c] = 'R';
  }

  for (int i = 0; i < n; i++)
    cout << g[i] << endl;
}

int main() {
  file_io();
  fast_io();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
