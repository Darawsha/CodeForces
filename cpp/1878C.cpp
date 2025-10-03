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
  ll n, k;
  ll x;
  cin >> n >> k >> x;
  bool ok = false;
  ll cntF = k * (k + 1) / 2;
  ll cntL = k * (2 * n - k + 1) / 2;
  if (x >= cntF && x <= cntL) {
    ok = true;
  }
  cout << (ok ? "YES" : "NO") << endl;
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
