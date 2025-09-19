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
  int n, m;
  cin >> n >> m;
  int days = 0;
  int socks = n;
  while (socks) {
    days++;
    socks--;
    if (days % m == 0) {
      socks++;
    }
  }
  cout << days << endl;
  return 0;
}
