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
  ll n, s;
  cin >> n >> s;
  vector<pair<ll, ll>> tasks(n);
  for (int i = 0; i < n; i++)
    cin >> tasks[i].first >> tasks[i].second;

  sort(tasks.begin(), tasks.end());
  ll c = s;
  ll ans = 0;
  for (auto &p : tasks) {
    c += p.first;
    ans += c - p.second;
  }

  cout << ans << endl;

  return 0;
}
