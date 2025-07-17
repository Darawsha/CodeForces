#include <bits/stdc++.h>
using namespace std;

struct Casino {
  long long l, r, real_val;
  bool visited = false;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    long long k;
    cin >> n >> k;

    vector<Casino> casinos(n);
    for (int i = 0; i < n; i++) {
      cin >> casinos[i].l >> casinos[i].r >> casinos[i].real_val;
      casinos[i].visited = false;
    }

    sort(casinos.begin(), casinos.end(),
         [](const Casino &a, const Casino &b) { return a.l < b.l; });

    priority_queue<long long, vector<long long>, greater<long long>> coins_pq;
    coins_pq.push(k);

    using pii = pair<long long, int>;
    priority_queue<pii, vector<pii>, greater<pii>> candidates;

    long long max_coins = k;
    int idx = 0;

    while (!coins_pq.empty()) {
      long long curr = coins_pq.top();
      coins_pq.pop();

      while (idx < n && casinos[idx].l <= curr) {
        candidates.emplace(casinos[idx].r, idx);
        ++idx;
      }

      while (!candidates.empty() && candidates.top().first < curr) {
        candidates.pop();
      }

      while (!candidates.empty() && candidates.top().first >= curr) {
        int i_casino = candidates.top().second;
        candidates.pop();

        if (!casinos[i_casino].visited) {
          casinos[i_casino].visited = true;
          long long new_coins = casinos[i_casino].real_val;
          max_coins = max(max_coins, new_coins);
          coins_pq.push(new_coins);
        }
      }
    }

    cout << max_coins << '\n';
  }

  return 0;
}
