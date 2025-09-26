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
  string s;
  cin >> s;
  int n = (int)s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'p')
      s[i] = 'q';
    else if (s[i] == 'q')
      s[i] = 'p';
  }
  reverse(all(s));
  cout << s << endl;
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
