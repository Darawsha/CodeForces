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
    ll n;
    cin >> n;
    ll res = 0;
    ll m = n;
    ll p = 1;
    int i = 0;
    while (m > 0) {
      int d = m % 3;
      m /= 3;
      ll cost_i = 3LL * p + (i ? 1LL * i * (p / 3) : 0LL);
      res += 1LL * d * cost_i;
      p *= 3;
      ++i;
    }
    cout << res << endl;
  }

  return 0;
}
