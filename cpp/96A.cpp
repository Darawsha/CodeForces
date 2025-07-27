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

  string s;
  cin >> s;
  int count1 = 0, count0 = 0;

  for (char c : s) {
    if (c == '1') {
      count1++;
      count0 = 0;
    } else {
      count1 = 0;
      count0++;
    }

    if (count0 >= 7 || count1 >= 7) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}
