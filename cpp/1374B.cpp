#include <bits/stdc++.h>
#define ll long long
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
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0) {
      n /= 2;
      cnt2++;
    }
    while (n % 3 == 0) {
      n /= 3;
      cnt3++;
    }
    if (n != 1 || cnt2 > cnt3) {
      cout << -1 << endl;
    } else {

      cout << (cnt3 - cnt2) + cnt3 << endl;
    }
  }
  return 0;
}
