#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m, q;
    cin >> n >> m >> q;
    vector<ll> A(n), B(m);
    for (int i = 0; i < n; ++i)
      cin >> A[i];
    for (int i = 0; i < m; ++i)
      cin >> B[i];
    sort(A.begin(), A.end(), greater<ll>());
    sort(B.begin(), B.end(), greater<ll>());

    vector<ll> SA(n + 1, 0), SB(m + 1, 0);
    for (int i = 1; i <= n; ++i)
      SA[i] = SA[i - 1] + A[i - 1];
    for (int i = 1; i <= m; ++i)
      SB[i] = SB[i - 1] + B[i - 1];

    int Zmax = n + m;
    vector<ll> base(Zmax + 1, 0);
    vector<int> cntA(Zmax + 1, 0);
    int ia = 1, ib = 1;
    for (int z = 1; z <= Zmax; ++z) {
      if (ia <= n && (ib > m || A[ia - 1] >= B[ib - 1])) {
        base[z] = base[z - 1] + A[ia - 1];
        cntA[z] = cntA[z - 1] + 1;
        ++ia;
      } else {
        base[z] = base[z - 1] + B[ib - 1];
        cntA[z] = cntA[z - 1];
        ++ib;
      }
    }

    while (q--) {
      int x, y, z;
      cin >> x >> y >> z;
      if (z == 0) {
        cout << 0 << endl;
        continue;
      }
      int L = max(0, z - y);
      int R = min(x, z);

      int ca = cntA[z];
      int cb = z - ca;
      ll baseSum = base[z];
      ll ans;

      if (ca < L) {
        int tneed = L - ca;
        ll dropB = SB[cb] - SB[cb - tneed];
        ll addA = SA[ca + tneed] - SA[ca];
        ans = baseSum - (dropB - addA);
      } else if (ca > R) {
        int tneed = ca - R;
        ll dropA = SA[ca] - SA[ca - tneed];
        ll addB = SB[cb + tneed] - SB[cb];
        ans = baseSum - (dropA - addB);
      } else {
        ans = baseSum;
      }

      cout << ans << endl;
    }
  }
  return 0;
}
