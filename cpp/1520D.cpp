#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    unordered_map<long long, long long> freq;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
      long long key = a[i] - (i + 1);
      ans += freq[key];
      freq[key]++;
    }

    cout << ans << "\n";
  }

  return 0;
}
