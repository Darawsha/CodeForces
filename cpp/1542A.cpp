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
    vector<int> a(2 * n);
    int even = 0, odd = 0;
    for (int i = 0; i < 2 * n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0)
        even++;
      else
        odd++;
    }
    if (even == odd)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
