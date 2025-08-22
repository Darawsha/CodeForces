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

  int a, b, c;
  cin >> a >> b >> c;
  int maxSteps = max({a, b, c});
  int minSteps = min({a, b, c});
  int mainSteps = (a + b + c) - maxSteps - minSteps;
  cout << abs(mainSteps - maxSteps) + abs(mainSteps - minSteps) << endl;
  return 0;
}
