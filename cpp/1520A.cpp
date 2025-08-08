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
    string s;
    cin >> s;
    vector<bool> seen(26, false);
    bool ok = true;
    for (int i = 0; i < n; ++i) {
      if (i > 0 && s[i] != s[i - 1] && seen[s[i] - 'A']) {
        ok = false;
        break;
      }
      seen[s[i] - 'A'] = true;
    }
    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}
