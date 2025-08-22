#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    long long ans = 0;
    for (int i = 0; i < 10; ++i) {
      string s;
      cin >> s;
      for (int j = 0; j < 10; ++j) {
        if (s[j] == 'X') {
          ans += 1 + min(min(i, j), min(9 - i, 9 - j));
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
