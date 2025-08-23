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
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<int> f(m);
  for (int i = 0; i < m; i++) {
    cin >> f[i];
  }
  sort(f.begin(), f.end());
  int ans = f[n - 1] - f[0];
  for (int i = 1; i <= m - n; i++) {
    ans = min(ans, f[i + n - 1] - f[i]);
  }
  cout << ans << endl;

  return 0;
}
