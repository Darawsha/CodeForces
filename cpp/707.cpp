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

  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < b; i++) {
      char ch;
      cin >> ch;
      if (ch == 'C' || ch == 'M' || ch == 'Y') {
        cout << "#Color" << endl;
        return 0;
      }
    }
  }
  cout << "#Black&White" << endl;
  return 0;
}
