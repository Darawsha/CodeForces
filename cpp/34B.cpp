#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  vector<int> v(a);
  int minsum = 0;
  for (int i = 0; i < a; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < a and b > 0; i++) {

    if (v[i] < 0) {
      minsum += v[i];
      b--;
    }


  }
  cout <<abs( minsum) << endl;
  return 0;
}
