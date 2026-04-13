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
  ll a, b, c;
  cin >> a >> b >> c;

  if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) {
    cout << "YES" << endl;
    return;
  }

  if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) {
    cout << "YES" << endl;
    return;
  }

  if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0) {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
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
