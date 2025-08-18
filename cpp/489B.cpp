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
  freopen("../omdeh", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a;
  cin >> a;
  vector<int> boys(a);
  for (int i = 0; i < a; i++) {
    cin >> boys[i];
  }

  int b;
  cin >> b;
  vector<int> girls(b);
  for (int i = 0; i < b; i++) {
    cin >> girls[i];
  }

  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());

  int i = 0, j = 0, count = 0;
  while (i < a and j < b) {
    if (abs(boys[i] - girls[j]) <= 1) {
      count++;
      i++;
      j++;
    } else if (boys[i] < girls[j]) {
      i++;

    } else
      j++;
  }
  cout << count << endl;
  return 0;
}
