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

  vector<string> words = {"CODEFORCES", "EYE",   "TESTING",   "SYSTEM",
                          "APRIL",      "FOOLS", "YOU",       "READ",
                          "POORLY",     "GET",   "EYEGLASSES"};

  int n;
  cin >> n;
  cout << words[n - 1] << '\n';

  return 0;
}
