#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ull = unsigned long long;

static inline ull mul64(ull a, ull b) { return a * b; }

struct Hash2D {
  int n, m;
  vector<ull> powX, powY;
  vector<vector<ull>> pref;

  Hash2D() : n(0), m(0) {}

  void init(int _n, int _m, const vector<string> &grid) {
    n = _n;
    m = _m;
    powX.assign(n + 1, 1);
    powY.assign(m + 1, 1);
    const ull baseX = 911382323ull;
    const ull baseY = 972663749ull;
    for (int i = 1; i <= n; ++i)
      powX[i] = mul64(powX[i - 1], baseX);
    for (int j = 1; j <= m; ++j)
      powY[j] = mul64(powY[j - 1], baseY);

    pref.assign(n + 1, vector<ull>(m + 1, 0));
    for (int i = 0; i < n; ++i) {
      ull wx = powX[i];
      for (int j = 0; j < m; ++j) {
        ull wy = powY[j];
        ull val = (ull)(grid[i][j] - 'a' + 1);
        ull w = mul64(val, mul64(wx, wy));
        pref[i + 1][j + 1] = pref[i][j + 1] + pref[i + 1][j] - pref[i][j] + w;
      }
    }
  }

  inline ull getRaw(int i1, int i2, int j1, int j2) const {
    return pref[i2 + 1][j2 + 1] - pref[i1][j2 + 1] - pref[i2 + 1][j1] +
           pref[i1][j1];
  }

  inline ull getNorm(int i1, int i2, int j1, int j2) const {
    ull raw = getRaw(i1, i2, j1, j2);
    ull sx = powX[(n - 1) - i1];
    ull sy = powY[(m - 1) - j1];
    return mul64(raw, mul64(sx, sy));
  }
};

int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  if (!(cin >> T))
    return 0;
  while (T--) {
    int n, m;
    cin >> n >> m;
    vector<string> A(n);
    for (int i = 0; i < n; ++i)
      cin >> A[i];

    vector<string> Ar(n, string(m, 'a'));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        Ar[i][j] = A[n - 1 - i][m - 1 - j];
      }
    }

    Hash2D hA, hAr;
    hA.init(n, m, A);
    hAr.init(n, m, Ar);

    unsigned long long best = ULLONG_MAX;

    int maxDi = (n == 1 ? 0 : 2 * n - 2);
    int maxDj = (m == 1 ? 0 : 2 * m - 2);

    for (int di = 0; di <= maxDi; ++di) {
      int iL = max(0, di - (n - 1));
      int iR = min(n - 1, di);
      if (iL > iR)
        continue;
      int rowShift = (n - 1) - di;

      for (int dj = 0; dj <= maxDj; ++dj) {

        int jL = max(0, dj - (m - 1));
        int jR = min(m - 1, dj);
        if (jL > jR)
          continue;

        int uL = rowShift + iL;
        int uR = rowShift + iR;
        int colShift = (m - 1) - dj;
        int vL = colShift + jL;
        int vR = colShift + jR;

        ull h1 = hA.getNorm(iL, iR, jL, jR);
        ull h2 = hAr.getNorm(uL, uR, vL, vR);
        if (h1 != h2)
          continue;

        unsigned long long N =
            (unsigned long long)n +
            (unsigned long long)llabs((long long)di - (long long)(n - 1));
        unsigned long long M =
            (unsigned long long)m +
            (unsigned long long)llabs((long long)dj - (long long)(m - 1));
        unsigned long long added =
            N * M - (unsigned long long)n * (unsigned long long)m;

        if (added < best)
          best = added;
      }
    }

    cout << best << '\n';
  }

  return 0;
}
