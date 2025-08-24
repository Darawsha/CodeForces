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

  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;
  sort(a.begin(), a.end());

  int q;
  cin >> q;
  while (q--) {
    int m;
    cin >> m;
    int res = upper_bound(a.begin(), a.end(), m) - a.begin();
    cout << res << '\n';
  }
  return 0;
}
