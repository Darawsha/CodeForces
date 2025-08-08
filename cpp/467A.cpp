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
  in count = 0;
  while (t--) {
    in p, q;
    cin >> p >> q;
    if (q - p >= 2) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
