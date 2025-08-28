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

  int n;
  cin >> n;

  vi programmers, mathematicians, pe_experts;
  for (int i = 1; i <= n; ++i) {
    int skill;
    cin >> skill;
    if (skill == 1)
      programmers.push_back(i);
    else if (skill == 2)
      mathematicians.push_back(i);
    else
      pe_experts.push_back(i);
  }

  int num_teams =
      min({programmers.size(), mathematicians.size(), pe_experts.size()});
  cout << num_teams << endl;

  for (int i = 0; i < num_teams; ++i) {
    cout << programmers[i] << " " << mathematicians[i] << " " << pe_experts[i]
         << endl;
  }

  return 0;
}
