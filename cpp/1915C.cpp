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
    ll sum = 0, in = 0;

    for (int i = 0; i < n; i++) {
      cin >> in;
      sum += in;
    }
    ll sqrtll = sqrtl(sum);
    if (sqrtll * sqrtll == sum)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
