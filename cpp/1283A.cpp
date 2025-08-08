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

  in t;
  cin >> t;

  while (t--) {
    in h, m;
    cin >> h >> m;
    int remain = 1440 - (h * 60 + m);
    cout << remain << endl;
  }

  return 0;
}
