#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define str string
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a == b && b == c && c == d)
    cout << "YES" << endl;
  else
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
