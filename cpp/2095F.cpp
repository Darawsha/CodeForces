#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  std::cin >> a >> b;
  std::cout << 12 * a + 14 * a * b + std::abs(a - b) + (a - 3 * b) * b + 2
            << '\n';
  return 0;
}
