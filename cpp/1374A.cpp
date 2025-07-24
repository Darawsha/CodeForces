#include <iostream>
#define ll long long
using namespace std;
#define endl '\n'
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll x, y, n;
    cin >> x >> y >> n;
    {
      ll maxmod = ((n - y) / x) * x + y;
      cout << maxmod << endl;
    }
  }

  return 0;
}
