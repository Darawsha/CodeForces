#include <iostream>
#include <vector>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int maxnum = 0;
  int n, k;
  cin >> n >> k;
  int current = 0;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int sum = 0;
  for (int i = 0; i < k; i++) {
    sum += a[i];
  }

  int minsum = sum;
  int minindex = 0;
  for (int i = k; i < n; i++) {
    sum = sum - a[i - k] + a[i];
    if (sum < minsum) {
      minsum = sum;
      minindex = i - k + 1;
    }
  }
  cout << minindex + 1 << endl;

  return 0;
}
