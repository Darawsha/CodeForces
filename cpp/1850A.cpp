//#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int count;
  cin >> count;
  while (count--) {

    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
