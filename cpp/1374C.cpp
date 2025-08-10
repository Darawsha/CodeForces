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
    short n;
    cin >> n;
    str s;
    cin >> s;
    short count = 0, minCount = 0;
    for (char c : s) {
      if (c == '(')
        count++;
      else if (c == ')')
        count--;
      minCount = min(minCount, count);
    }
    cout << -minCount << endl;
  }

  return 0;
}
