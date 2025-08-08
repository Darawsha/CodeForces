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

  int t, x, len;
  cin >> t;
  while (t--) {
    cin >> x;
    len = to_string(x).length();
    cout << ((x % 10) - 1) * 10 + (len * (len + 1) / 2) << "\n";
  }
  return 0;
}
