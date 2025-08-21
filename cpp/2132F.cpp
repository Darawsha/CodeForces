#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'
// May be not  coorect , i didn't test it
int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> U(m + 1), V(m + 1);
    vector<vector<pair<int, int>>> g(n + 1);
    for (int i = 1; i <= m; ++i) {
      int u, v;
      cin >> u >> v;
      U[i] = u;
      V[i] = v;
      g[u].push_back({v, i});
      g[v].push_back({u, i});
    }

    // Tarjan to find bridges
    vector<int> tin(n + 1, 0), low(n + 1, 0), tout(n + 1, 0), parent(n + 1, -1),
        parentEdge(n + 1, -1);
    vector<char> isBridge(m + 1, 0);
    int timer = 0;

    function<void(int, int)> dfs = [&](int u, int pe) {
      tin[u] = low[u] = ++timer;
      for (auto [v, eid] : g[u]) {
        if (eid == pe)
          continue;
        if (tin[v]) {
          low[u] = min(low[u], tin[v]);
        } else {
          parent[v] = u;
          parentEdge[v] = eid;
          dfs(v, eid);
          low[u] = min(low[u], low[v]);
          if (low[v] > tin[u]) {
            isBridge[eid] = 1;
          }
        }
      }
      tout[u] = timer;
    };

    dfs(1, -1);

    vector<int> forced;
    for (int v = 1; v <= n; ++v) {
      int e = parentEdge[v];
      if (e != -1 && isBridge[e]) {
        bool n_in_sub = (tin[v] <= tin[n] && tin[n] <= tout[v]);
        if (n_in_sub)
          forced.push_back(e);
      }
    }

    int q;
    cin >> q;

    if (forced.empty()) {
      while (q--) {
        int c;
        cin >> c;
        cout << -1 << endl;
      }
      continue;
    }

    const long long INF = (long long)1e18;
    vector<long long> dist(n + 1, INF);
    vector<int> bestLbl(n + 1, INT_MAX);

    struct State {
      long long d;
      int lbl;
      int v;
    };
    struct Cmp {
      bool operator()(const State &a, const State &b) const {
        if (a.d != b.d)
          return a.d > b.d;
        if (a.lbl != b.lbl)
          return a.lbl > b.lbl;
        return a.v > b.v;
      }
    };
    priority_queue<State, vector<State>, Cmp> pq;

    for (int e : forced) {
      int a = U[e], b = V[e];
      for (int s : {a, b}) {
        if (dist[s] > 0 || (dist[s] == 0 && e < bestLbl[s])) {
          dist[s] = 0;
          bestLbl[s] = e;
          pq.push({0, e, s});
        }
      }
    }

    while (!pq.empty()) {
      auto cur = pq.top();
      pq.pop();
      if (cur.d != dist[cur.v] || cur.lbl != bestLbl[cur.v])
        continue;
      for (auto [to, eid] : g[cur.v]) {
        long long nd = cur.d + 1;
        int nl = cur.lbl;
        if (nd < dist[to] || (nd == dist[to] && nl < bestLbl[to])) {
          dist[to] = nd;
          bestLbl[to] = nl;
          pq.push({nd, nl, to});
        }
      }
    }

    while (q--) {
      int c;
      cin >> c;
      if (dist[c] == INF) {
        cout << -1 << endl;
      } else {
        cout << bestLbl[c] << endl;
      }
    }
  }

  return 0;
}
