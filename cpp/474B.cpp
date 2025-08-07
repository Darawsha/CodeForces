#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> prefix(n);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (i == 0)
      prefix[i] = a[i];
    else
      prefix[i] = prefix[i - 1] + a[i];
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; ++i) {
    int query;
    cin >> query;

    for (int j = 0; j < n; ++j) {
      if (query <= prefix[j]) {
        cout << (j + 1) << endl;
        break;
      }
    }
  }

  return 0;
}
