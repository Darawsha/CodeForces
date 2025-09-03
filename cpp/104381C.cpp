#include <bits/stdc++.h>
#define ll long long

using namespace std;
#define endl '\n'

int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> a(n);
  int MAX_A = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    MAX_A = max(MAX_A, a[i]);
  }

  vector<int> freq(MAX_A + 1, 0);
  for (int x : a)
    freq[x]++;

  ll result = 0;
  for (int x = 1; x <= MAX_A; x++) {
    if (freq[x] == 0)
      continue;
    for (int multiple = x; multiple <= MAX_A; multiple += x) {
      if (freq[multiple] > 0)
        result += (ll)freq[x] * freq[multiple];
    }
  }

  for (int x = 1; x <= MAX_A; x++)
    result -= freq[x];

  cout << result << "\n";
  return 0;
}
