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
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> dragons(n);
  for (int i = 0; i < n; i++) {
    cin >> dragons[i].first >> dragons[i].second;
  }
  sort(dragons.begin(), dragons.end());
  for (int i = 0; i < n; i++) {
    if (s > dragons[i].first) {
      s += dragons[i].second;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
