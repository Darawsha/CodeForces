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

  in t;
  cin >> t;

  while (t--) {
    str s;
    cin >> s;
    in len = s.length();

    if (len % 2 != 0) {
      cout << "NO" << endl;
    } else {
      str first = s.substr(0, len / 2);
      str second = s.substr(len / 2);
      if (first == second) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
