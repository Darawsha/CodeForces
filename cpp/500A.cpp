#include <iostream>
#include <vector>
#define in int
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<in> s(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> s[i];
  }

  int pos = 1;
  while (pos < m) {
    pos += s[pos - 1];
  }

  if (pos == m)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
