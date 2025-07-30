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

  string s;
  cin >> s;
  string target = "hello";
  in t = 0;

  for (char c : s) {
    if (c == target[t]) {
      t++;
      if (t == target.size())
        break;
    }
  }

  if (t == target.size()) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
