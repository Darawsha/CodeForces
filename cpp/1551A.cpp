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

  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll q = n / 3, r = n % 3;
    if (r == 0) {
      cout << q << " " << q << endl;
    } else if (r == 1) {
      cout << q + 1 << " " << q << endl;
    } else { 
      cout << q << " " << q + 1 << endl;
    }
  }

  return 0;
}
