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
  int n = s.size();
  int count0 = 0, count1 = 0;
  for (char c : s) {
    if (c == '0')
      count0++;
    else
      count1++;
  }
  int steps = min(count0, count1);
  if (steps % 2 != 0) {
    cout << "DA" << endl;

  } else {
    cout << "NET" << endl;
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
