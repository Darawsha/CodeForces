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

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int chickens = 0;
    int cows = 0;
    cows = n / 4;
    n %= 4;
    chickens = n / 2;
    cout << chickens + cows << endl;
  }
  return 0;
}
