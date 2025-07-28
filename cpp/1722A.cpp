#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define str string
#define ll long long
#define in int
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    str s;
    cin >> n >> s;
    if (n != 5) {
      cout << "NO" << endl;
    } else {
      str target = "Timur";
      sort(s.begin(), s.end());
      sort(target.begin(), target.end());
      if (s == target) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
