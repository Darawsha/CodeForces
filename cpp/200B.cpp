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
  ll result = 0;
  for (int i = 0; i < n; i++) {
    ll p;
    cin >> p;
    result += p;
  }
cout << setprecision(12) << (double)result / n << endl;

  return 0;
}
