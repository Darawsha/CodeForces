#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  in t;
  cin >> t;
  vector<in> v(t);
  in count = 0;
  for (int i = 0; i < t; i++) {
    cin >> v[i];
    if (v[i] == 1) {
      count++;
    }
  }
  if (count != 0) {
    cout << "HARD" << endl;
  } else {
    cout << "EASY" << endl;
  }

  return 0;
}
