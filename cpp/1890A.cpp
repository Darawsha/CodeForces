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

  int x;
  cin >> x;
  vi a(x);
  bool flag = false;
  for (int i = 0; i < x; i++) {
    cin >> a[i];
  }
  set<int> s(all(a));
  int len = s.size();
  if (len == 1) {
    flag = true;
  } else if (len == 2) {
    int ca = *s.begin();
    int cb = *s.rbegin();
    ca = count(all(a), ca);
    cb = count(all(a), cb);
    if (abs(ca - cb) <= 1) {
      flag = true;
    }
  }
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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
