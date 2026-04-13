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
  freopen("../Darawsha", "r", stdin);
  freopen("../DarawshaRes", "w", stdout);
#endif
}

void solve() {

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cout << (a[0] == 1 ? "YES" : "NO") << '\n';
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
