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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    if (k == 1) {
      cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
