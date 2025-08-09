#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
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
    str s;
    cin >> s;
    int countA = 0;
    for (char c : s) {
      if (c == 'A') {
        countA++;
      }
    }
    if (countA > 2) {
      cout << "A" << endl;
    } else
      cout << "B" << endl;
  }

  return 0;
}
