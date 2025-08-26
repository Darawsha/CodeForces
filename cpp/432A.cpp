#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  vector<int> v(a);
  for (int i = 0; i < a; i++) {
    cin >> v[i];
  }
  int count = 0;
  int ans = 0;
  for (int i = 0; i < a; i++) {
    if (v[i] + b <= 5) {
      count++;
      if (count == 3) {
        ans++;
        count = 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
