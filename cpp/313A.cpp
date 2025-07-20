#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll state;
  cin >> state;
  if (state >= 0) {
    cout << state << endl;
  } else if (state < 0) {

    ll test = state / 10;
    ll last_digit = state % 10;
    ll without_last_digit = (state / 100) * 10 + last_digit;
    cout << max(test, without_last_digit) << endl;
  }

  return 0;
}
