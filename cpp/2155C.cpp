#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

void file_io() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
  freopen("../0.3res", "w", stdout);
#endif
}

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n + 1);
  for (int i = 1; i <= n; ++i)
    cin >> a[i];

  const ll modQ = 676767677LL;

  ll L = 0, R = n;
  ll sp = 0;

  for (int i = 1; i <= n; i++) {
    ll c = i - a[i];
    if (i & 1) {
      ll A = (2 * sp) - c;
      L = max(L, A);
      R = min(R, A + 1);
    } else {
      ll B = c - (2 * sp);
      L = max(L, B - 1);
      R = min(R, B);
    }
    ll crnt = c - sp;
    sp = crnt;
  }

  L = max(L, 0LL);
  R = min(R, (ll)n);

  ll ans = 0;
  if (n % 2 == 0) {

    ll TR = sp;
    if (TR >= L && TR <= R) {
      ans = 1;
    } else
      ans = 0;

  } else {

    if (sp != 0)
      ans = 0;
    else if (R >= L)
      ans = (R - L + 1) % modQ;
    else
      ans = 0;
  }

  cout << (ans % modQ + modQ) % modQ << endl;
}

int main() {
  file_io();
  fast_io();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
