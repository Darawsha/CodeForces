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

    if (n % 4 != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      int half = n / 2;

      for (int i = 1; i <= half; ++i) {
        cout << i * 2 << " ";
      }

      for (int i = 1; i < half; ++i) {
        cout << i * 2 - 1 << " ";
      }

      int last_odd = 3 * half - 1;
      cout << last_odd << endl;
    }
  }

  return 0;
}
