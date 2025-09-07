#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  string in;
  cin >> in;

  int result = 0;
  char current = 'a';
  for (int i = 0; i < in.length(); i++) {
    int dif = abs(current - in[i]);
    result += min(dif, 26 - dif);
    current = in[i];
  }
  cout << result << endl;

  return 0;
}
