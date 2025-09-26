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
  if (n % 2 != 0) {
    cout << -1 << endl;
    return;
  }
  for (int i = 1; i < n; i += 2) {
    cout << i + 1 << " " << i << " ";
  }
  return;
}

int main() {
  file_io();
  fast_io();

  solve();

  return 0;
}
