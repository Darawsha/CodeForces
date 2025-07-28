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

  int n;
  cin >> n;

  int current_passengers = 0, max_passengers = 0;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    current_passengers -= a;
    current_passengers += b;
    max_passengers = max(max_passengers, current_passengers);
  }

  cout << max_passengers << endl;
  return 0;

  return 0;
}
