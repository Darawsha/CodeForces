#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

bool is_prime(int x) {
  if (x < 2)
    return false;
  for (int i = 2; i * i <= x; ++i)
    if (x % i == 0)
      return false;
  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  int next = n + 1;
  while (!is_prime(next))
    ++next;
  if (next == m)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
