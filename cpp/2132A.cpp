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
    int n;
    cin >> n;
    //
    str a;
    cin >> a;
    //
    int x;
    cin >> x;
    //
    str d, v;
    cin >> d;
    cin >> v;
    for (int i = 0; i < x; i++) {
      if (v[i] == 'D') {
        // Dima appends to the end
        a.push_back(d[i]);
      } else { // v[i] == 'V'
        // Vlad prepends to the beginning
        a.insert(a.begin(), d[i]);
      }
    }
    cout << a << endl;
  }
  return 0;
}
