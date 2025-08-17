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

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long b = n % 2020;
    if (b <= n / 2020) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
