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
    string s;
    cin >> s;
    int ans = 0;
    int indexFrist = 0;
    int indexLast = n - 1;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        indexFrist = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'B') {
        indexLast = i;
        break;
      }
    }
    cout << indexLast - indexFrist + 1 << endl;
  }

  return 0;
}
