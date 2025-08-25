#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'
bool isComposite(int num) {
  if (num < 4)
    return false;
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0)
      return true;
  }
  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for (int x = 4; x < n; ++x) {
    int y = n - x;
    if (isComposite(x) && isComposite(y)) {
      cout << x << " " << y << '\n';
      break;
    }
  }

  return 0;
}
