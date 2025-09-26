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

auto solve() {
  int k, n;
  cin >> n >> k;
  string s;
  cin >> s;
  vi cnt(26, 0);

  for (char c : s) {
    cnt[c - 'a']++;
  }
  int odds = 0;
  for (int c : cnt) {
    if (c % 2)
      odds++;
  }

  int m = n - k;

  int minmOdds = max(0, odds - k);

  if (m % 2 == 0) {
    return (minmOdds == 0 ? "YES" : "NO");
  } else {
    return (minmOdds <= 1 ? "YES" : "NO");
  }
}

int main() {
  file_io();
  fast_io();

  int t = 1;
  cin >> t;
  while (t--) {
    cout << solve() << endl;
  }
  return 0;
}
