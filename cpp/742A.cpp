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
  ll n;
  cin >> n;
  if (n == 0) {
    cout << 1 << endl;
  } else {
    int last = n % 4;
    if (last == 1)
      cout << 8;
    else if (last == 2)
      cout << 4;
    else if (last == 3)
      cout << 2;
    else
      cout << 6;
  }
  return 0;
}
