#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  in t;
  in a, b;
  cin >> t;
  while (t--) {
    bool found = false;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
      in x;
      cin >> x;
      if (x == b) {
        found = true;
      }
    }
    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
