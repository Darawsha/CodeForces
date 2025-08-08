#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
#define vi vector<int>
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  in t;
  cin >> t;

  while (t--) {
    in x;
    cin >> x;

    vi parts;
    in place = 1;

    while (x > 0) {
      in digit = x % 10;
      if (digit != 0) {
        parts.push_back(digit * place);
      }
      x /= 10;
      place *= 10;
    }

    cout << parts.size() << endl;
    for (int num : parts) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;

  return 0;
}
