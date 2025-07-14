#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    cout << b - a << endl; // output the difference
  }

  return 0;
}
