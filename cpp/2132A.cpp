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
    string a;
    cin >> a;
    int x;
    cin >> x;
    string d, v;
    cin >> d;
    cin >> v;
    for (int i = 0; i < x; i++) {
      if (v[i] == 'D') {
        a.push_back(d[i]);
      } else {
        a.insert(a.begin(), d[i]);
      }
    }
    cout << a << endl;
  }
  return 0;
}
