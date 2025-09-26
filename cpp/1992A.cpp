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
  int a = 0, b = 0, c = 0;
  cin >> a >> b >> c;
  int res = 0;
  vi v = {a, b, c};
  for (int i = 0; i < 5; i++) {
    sort(all(v));
    v[0]++;
  }
  cout << v[0] * v[1] * v[2] << endl;
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
