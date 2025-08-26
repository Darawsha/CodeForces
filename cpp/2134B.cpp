#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
vector<int> primes = {2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                      43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
ll mod_pow(ll a, ll b, ll m) {
  ll res = 1;
  while (b) {
    if (b & 1)
      res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}
ll mod_inv(ll a, ll m) { return mod_pow(a, m - 2, m); }
int main() {
#ifndef ONLINE_JUDGE

  freopen("../0.3", "r", stdin);
#endif

  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int test = 0; test < t; test++) {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    ll g = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i == 0)
        g = a[0];
      else
        g = __gcd(g, a[i]);
    }
    if (g > 1) {
      for (ll x : a)
        cout << x << " ";
      cout << "\n";
      continue;
    }
    int p = -1;
    for (int pp : primes) {
      if (k % pp != 0) {
        p = pp;
        break;
      }
    }
    ll modd = p;
    ll kk = k % modd;
    ll invk = mod_inv(kk, modd);
    for (ll ai : a) {
      ll rem = ai % modd;
      if (rem < 0)
        rem += modd;
      ll negrem = (modd - rem) % modd;
      ll m = negrem * invk % modd;
      ll new_ai = ai + m * k;
      cout << new_ai << " ";
    }
    cout << "\n";
  }
  return 0;
}
