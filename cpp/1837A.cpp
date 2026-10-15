#include <bits/stdc++.h>
using namespace std;

#define Darawsha 0.3

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
  freopen("../input", "r", stdin);
  freopen("../output", "w", stdout);
#endif
}

void solve() {
  int x, k;
  cin >> x >> k;
  if (x % k != 0) {
    cout << 1 << endl;
    cout << x << endl;
  } else {
    cout << 2 << endl;
    cout << x - 3 << " " << 3 << endl;
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
