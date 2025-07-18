#include <bits/stdc++.h>
using namespace std;
using int64 = int64_t;

// this code is correct as logic but runtime is too high for large inputs
// so in codeforces it is not accepted

void solve() {
  auto start = std::chrono::high_resolution_clock::now();

  int n, q;
  cin >> n >> q;

  vector<int> color(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> color[i];
  }

  vector<vector<pair<int, int64>>> adj(n + 1);
  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    int64 c;
    cin >> u >> v >> c;
    adj[u].emplace_back(v, c);
    adj[v].emplace_back(u, c);
  }

  vector<unordered_map<int, int64>> color_sum(n + 1);
  for (int u = 1; u <= n; ++u) {
    for (auto [v, c] : adj[u]) {
      color_sum[u][color[v]] += c;
    }
  }

  int64 total_cost = 0;
  for (int u = 1; u <= n; ++u) {
    for (auto [v, c] : adj[u]) {
      if (u < v && color[u] != color[v])
        total_cost += c;
    }
  }

  while (q--) {
    int v, x;
    cin >> v >> x;
    if (color[v] == x) {
      cout << total_cost << '\n';
      continue;
    }
    for (auto [u, c] : adj[v]) {
      color_sum[u][color[v]] -= c;
      color_sum[u][x] += c;
      if (color[u] != color[v])
        total_cost -= c;
      if (color[u] != x)
        total_cost += c;
    }
    color[v] = x;
    cout << total_cost << '\n';
  }

  auto end = std::chrono::high_resolution_clock::now();
  auto duration =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cerr << "Time for this test case: " << duration.count() << " ms\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
