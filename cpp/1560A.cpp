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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0, num = 1;
    while (true) {
      if (num % 3 != 0 and num % 10 != 3) {
        count++;
        if (count == n) {
          cout << num << endl;
          break;
        }
      }
      num++;
    }
  }
  return 0;
}
