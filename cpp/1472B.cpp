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

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 1)
        count1++;
      else
        count2++;
    }

    int total = count1 + count2 * 2;

    if (total % 2 != 0) {
      cout << "NO\n";
    } else {
      int half = total / 2;
      if (half % 2 == 1 && count1 == 0) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  }

  return 0;
}
