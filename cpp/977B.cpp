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
  string s;
  cin >> s;
  map<string, int> freq;
  for (int i = 0; i < n - 1; i++) {
    string ch = s.substr(i, 2);
    freq[ch]++;
  }
  string best = "";
  int mx = 0;
  for (auto &p : freq) {
    if (p.second > mx) {
      mx = p.second;
      best = p.first;
    }
  }
  cout << best << endl;
}

int main() {
  file_io();
  fast_io();

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
