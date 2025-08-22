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
    vi a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];

    int max_a = *max_element(a.begin(), a.end());
    int min_a = *min_element(a.begin(), a.end());
    cout << max_a - min_a << endl;
  }

  return 0;
}
