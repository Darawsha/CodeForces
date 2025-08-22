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
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  vector<ll> p10(19, 1);
  for (int i = 1; i <= 18; i++)
    p10[i] = p10[i - 1] * 10;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> xs;
    for (int k = 1; k <= 18; k++) {
      ll d = p10[k] + 1;
      if (d > n)
        break;
      if (n % d == 0)
        xs.push_back(n / d);
    }
    if (xs.empty()) {
      cout << 0 << endl;
    } else {
      sort(xs.begin(), xs.end());
      cout << xs.size() << endl;
      for (int i = 0; i < (int)xs.size(); i++) {
        if (i)
          cout << ' ';
        cout << xs[i];
      }
      cout << endl;
    }
  }
  return 0;
}
