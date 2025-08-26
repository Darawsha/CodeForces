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

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    vector<ll> b(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
      if (i % 2 == 1) {
        b[i] = -a[i - 1];
      } else {
        b[i] = a[i - 1];
      }
    }

    ll total = 0;
    ll maxl = 0;
    ll last_s = 0;

    for (int i = 1; i <= n; ++i) {
      ll tent_s = last_s + b[i];
      ll deficit = 0;
      if (i >= 2) {
        ll xx = maxl;
        deficit = max(0LL, xx - tent_s);
        total += deficit;
        tent_s += deficit;
        if (i % 2 == 0) {
          last_s += deficit;
        }
      }
      ll s = tent_s;
      maxl = max(maxl, last_s);
      last_s = s;
    }

    cout << total << '\n';
  }

  return 0;
}
