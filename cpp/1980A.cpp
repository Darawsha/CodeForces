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
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  vi req1(8, 0);

  for (int i = 0; i < n; i++) {
    req1[s[i] - 'A']++;
  }

  int res = 0;
  for (int i = 0; i < 7; i++) {
    if (m - req1[i] > 0) {
      res += max(0, m - req1[i]);
    }
  }
  cout << res << endl;
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
