#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int max_blank = 0, current = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] == 0) {
        current++;
        max_blank = max(max_blank, current);
      } else {
        current = 0;
      }
    }
    cout << max_blank << endl;
  }
  return 0;
}
