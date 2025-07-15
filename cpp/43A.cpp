#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  map<string, int> m;

  while (n--) {
    string s;
    cin >> s;
    m[s]++;
  }

  string winner;
  int maxGoals = 0;
  for (auto &entry : m) {
    if (entry.second > maxGoals) {
      maxGoals = entry.second;
      winner = entry.first;
    }
  }

  cout << winner << '\n';

  return 0;
}
