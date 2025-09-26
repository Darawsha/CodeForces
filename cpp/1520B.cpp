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
    ll n;
    cin >> n;
    int len = to_string(n).size();
    int ans = (len - 1) * 9;
    int dig = to_string(n)[0] - '0';
    ll nums = 0;
    for (int i = 0; i < len; i++) {
      nums = nums * 10 + dig;
    }
    if (nums <= n)
      ans += dig;
    else
      ans += (dig - 1);
    cout << ans << endl;
  }
  return 0;
}
