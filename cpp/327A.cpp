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
  vector<int> a(n);
  int ones = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 1)
      ones++;
  }
  if (ones == n) {
    cout << n - 1 << endl;
    return;
  }
  int ans = 0;
  int maxones = INT_MIN;
  for (int i = 0; i < n; i++) {
    int value = 0;
    if (a[i] == 1)
      value = -1;
    else
      value = 1;

    ans = max(value, ans + value);
    maxones = max(maxones, ans);
  }
  if (maxones < 0)
    maxones = 0;
  cout << ones + maxones << endl;
}

int main() {
  file_io();
  fast_io();

  solve();
  return 0;
}
