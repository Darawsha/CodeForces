#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  bool happy = false;
  vector<pair<int, int>> listoflaptops(t);

  for (int i = 0; i < t; i++) {
    cin >> listoflaptops[i].first >> listoflaptops[i].second;
  }
  sort(listoflaptops.begin(), listoflaptops.end());

  for (int i = 1; i < t; i++) {
    if (listoflaptops[i - 1].second > listoflaptops[i].second) {
      happy = true;
      break;
    }
  }

  happy ? cout << "Happy Alex" << endl : cout << "Poor Alex" << endl;
  return 0;
}
