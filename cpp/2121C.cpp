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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }

    int max_val = -1;
    vector<pair<int, int>> max_positions;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] > max_val) {
          max_val = a[i][j];
          max_positions.clear();
          max_positions.emplace_back(i, j);
        } else if (a[i][j] == max_val) {
          max_positions.emplace_back(i, j);
        }
      }
    }

    vector<int> row_count(n, 0), col_count(m, 0);
    for (auto &p : max_positions) {
      row_count[p.first]++;
      col_count[p.second]++;
    }

    int max_covered = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int covered = row_count[i] + col_count[j];
        if (a[i][j] == max_val) {
          covered -= 1;
        }
        max_covered = max(max_covered, covered);
      }
    }

    if (max_covered == (int)max_positions.size()) {
      int second_max = -1;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (a[i][j] != max_val) {
            second_max = max(second_max, a[i][j]);
          }
        }
      }
      if (second_max == -1) {
        cout << max_val - 1 << "\n";
      } else {
        cout << max(max_val - 1, second_max) << "\n";
      }
    } else {
      cout << max_val << "\n";
    }
  }

  return 0;
}
