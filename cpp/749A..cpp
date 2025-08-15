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
  int k = t / 2;

  cout << k << endl;

  if (t % 2 == 0) {
    for (int i = 0; i < k; i++) {
      if (i)
        cout << " ";
      cout << 2;
    }
  } else {
    for (int i = 0; i < k - 1; i++) {
      if (i)
        cout << " ";
      cout << 2;
    }
    if (k > 1)
      cout << " ";
    cout << 3;
  }
  cout << endl;
  return 0;
}
