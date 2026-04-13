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
  int n;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }

  sort(all(b));
  if (a != b) {
    cout << 0 << endl;
    return;
  }

  ll minDiff = LLONG_MAX;
  for (int i = 1; i < n; i++) {
    minDiff = min(minDiff, a[i] - a[i - 1]);
  }
  cout << (minDiff / 2 + 1) << endl;
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
