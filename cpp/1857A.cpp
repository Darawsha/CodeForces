#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;
    vector<int> arr(x);
    int sum = 0;
    for (int i = 0; i < x; i++) {
      cin >> arr[i];
      sum += arr[i];
    }
    if (sum % 2)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}
