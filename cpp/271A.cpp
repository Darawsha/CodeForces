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

  int n;
  cin >> n;
  bool found = false;
  n += 1;
  while (!found) {

    in a, b, c, d;
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      found = true;
      cout << n << endl;
    } else {
      n++;
    }
  }
  return 0;
}
