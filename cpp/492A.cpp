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

  int height = 0;
  int total = 0;
  int level = 1;

  while (true) {
    int cubes = level * (level + 1) / 2;
    if (total + cubes > n)
      break;
    total += cubes;
    height++;
    level++;
  }

  cout << height << endl;
  return 0;
}
