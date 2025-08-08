#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define in int
#define vi vector<int>
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  in n;
  cin >> n;

  vi giftFrom(n);
  for (in i = 0; i < n; ++i) {
    in to;
    cin >> to;
    giftFrom[to - 1] = i + 1;
  }

  for (in i = 0; i < n; ++i) {
    cout << giftFrom[i] << " ";
  }

  return 0;
}
