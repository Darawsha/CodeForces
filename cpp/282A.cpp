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
  cin >> t;
  in x = 0;
  string s;

  while (t--) {

    cin >> s;
    if (s.find("++") != string::npos) {
      x++;
    } else if (s.find("--") != string::npos) {
      x--;
    }
  }
  cout << x << endl;

  return 0;
}
