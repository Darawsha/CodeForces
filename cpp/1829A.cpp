#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  short t;
  cin >> t;
  string test;
  string codeforces = "codeforces";
  short count = 0;
  while (t--) {
    cin >> test;
    count = 0;
    for (int i = 0; i < 10; i++) {
      if (test[i] != codeforces[i]) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}
