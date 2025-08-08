#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  short t;
  cin >> t;
  while (t--) {
    in y;
    cin >> y;
    vi v(y);
    for (int i = 0; i < y; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    v[0]=v[0] + 1;
    int res = 1;
    for (int i = 0; i < y; i++) {
      res *= v[i];
    }
    cout << res << endl;
  }
  return 0;
}
