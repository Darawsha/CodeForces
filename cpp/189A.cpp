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

  int n, a, b, c;
  cin >> n >> a >> b >> c;

  int maxPieces = 0;

  for (int i = 0; i * a <= n; i++) {
    for (int j = 0; j * b <= n; j++) {
      int rem = n - i * a - j * b;
      if (rem >= 0 && rem % c == 0) {
        int k = rem / c;
        int total = i + j + k;
        if (total > maxPieces)
          maxPieces = total;
      }
    }
  }

  cout << maxPieces << endl;

  return 0;
}
