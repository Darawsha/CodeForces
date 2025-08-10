#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'
// include <bits/stdc++.h>

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi v(n);
    int minBox = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      if (v[i] < minBox) {
        minBox = v[i];
      }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      count += v[i] - minBox;
    }
    cout << count << endl;
  }

  return 0;
}
