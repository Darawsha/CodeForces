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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      a[i] = s.find('#') + 1;
    }

    for (int i = n - 1; i >= 0; i--) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
