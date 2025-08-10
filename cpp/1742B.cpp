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
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());
    bool ok = true;
    for (int i = 1; i < n; i++) {
      if (a[i] == a[i - 1]) {
        ok = false;
        break;
      }
    }
    cout << (ok ? "YES" : "NO") << endl;
  }

  return 0;
}
