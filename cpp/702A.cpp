#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<ll> a(n);
  ll count = 1;
  ll max_count = 1;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) {
      count++;
    } else {

      max_count = max(max_count, count);
      count = 1;
    }
  }
  max_count = max(max_count, count);
  cout << max_count << endl;

  return 0;
}
