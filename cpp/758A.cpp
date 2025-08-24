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
  vector<int> v(n);
  int maxC = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] > maxC) {
      maxC = v[i];
    }
  }
  for (int i = 0; i < n; i++) {
    count += maxC - v[i];
  }
  cout << count << endl;
  return 0;
}
