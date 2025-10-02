#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

void file_io() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
}

void solve() {
  int n, q;
  cin >> n >> q;
  vi a(n + 1), b(n + 1, 0);
  ll tsum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    tsum += a[i];
    b[i] = b[i - 1] + a[i];
  }
  while (q--) {
    int l, r;
    ll k;
    cin >> l >> r >> k;

    ll range = b[r] - b[l - 1];
    ll sum = tsum - range + (r - l + 1) * k;
    if (sum % 2 == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
int main() {
  file_io();
  fast_io();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
