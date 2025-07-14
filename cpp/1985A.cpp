#include <bits/stdc++.h>
#define ios                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);
using namespace std;

int main() {
  ios

      int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    swap(s1[0], s2[0]); // swap first characters
    cout << s1 << " " << s2 << '\n';
  }

  return 0;
}
