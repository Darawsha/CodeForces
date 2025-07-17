#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
  while (b) {
    ll tmp = a % b;
    a = b;
    b = tmp;
  }
  return a;
}

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<ll> p(n), s(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];
    for (int i = 0; i < n; i++)
      cin >> s[i];

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      a[i] = lcm(p[i], s[i]);
      if (a[i] > 1e15) {
        a[i] = 1e15;
      }
    }

    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
      prefix[i] = gcd(prefix[i - 1], a[i]);
    }

    vector<ll> suffix(n);
    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      suffix[i] = gcd(suffix[i + 1], a[i]);
    }

    if (prefix == p && suffix == s)
      cout << "Yes\n";
    else
      cout << "No\n";
  }

  return 0;
}
