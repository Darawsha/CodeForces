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
    vector<ll> odd;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
      ll x;
      cin >> x;
      if ((x & 1) == 0)
        sum += x;
      else
        odd.push_back(x);
    }

    if (odd.empty()) {
      cout << 0 << endl;
      continue;
    }

    sort(odd.begin(), odd.end(), greater<ll>());
    int k = (int(odd.size()) + 1) / 2;
    ll odds = 0;
    for (int i = 0; i < k; ++i)
      odds += odd[i];

    cout << (sum + odds) << endl;
  }

  return 0;
}
