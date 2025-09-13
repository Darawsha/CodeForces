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
    vector<vector<int>> seq(n);
    int mmax = 0;

    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      seq[i].resize(k);
      for (int j = 0; j < k; j++) {
        cin >> seq[i][j];
      }
      if (k > mmax)
        mmax = k;
    }

    auto good = [&](int i, int j, int startPos) {
      const auto &seq1 = seq[i];
      const auto &seq2 = seq[j];
      int pos = startPos;
      while (pos < (int)seq1.size() && pos < (int)seq2.size()) {
        if (seq1[pos] != seq2[pos])
          return seq1[pos] < seq2[pos];
        pos++;
      }
      if (seq1.size() != seq2.size())
        return seq1.size() < seq2.size();
      return i < j;
    };

    vector<int> result;
    int crnt = 0;

    while (crnt < mmax) {
      int chosenSeq = -1;
      int minValue = INT_MAX;

      for (int i = 0; i < n; i++) {
        if (crnt < (int)seq[i].size()) {
          if (seq[i][crnt] < minValue) {
            minValue = seq[i][crnt];
          }
        }
      }

      for (int i = 0; i < n; i++) {
        if (crnt < (int)seq[i].size() && seq[i][crnt] == minValue) {
          if (chosenSeq == -1 || good(i, chosenSeq, crnt + 1)) {
            chosenSeq = i;
          }
        }
      }

      for (int i = crnt; i < (int)seq[chosenSeq].size(); i++) {
        result.push_back(seq[chosenSeq][i]);
      }

      crnt = seq[chosenSeq].size();
    }

    for (int i = 0; i < (int)result.size(); i++) {
      cout << result[i];
      if (i + 1 != (int)result.size())
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
