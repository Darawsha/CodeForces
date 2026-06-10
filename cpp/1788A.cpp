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
  freopen("../Darawsha", "r", stdin);
  freopen("../DarawshaRes", "w", stdout);
#endif
}

void solve() {
  int a = 0, k = 1000;
  cin >> a;
  vi v(a);
  int count = 0;
  int total = 1;

  for (int i = 0; i < a; i++) {
    cin >> v[i];
    total *= v[i];
    if (v[i] == 2) {
      count++;
    }
  }

  if (count == 0) {
    k = 1;
    cout << k << endl;
  }

  if (count % 2 == 0) {
    int half = count / 2;
    int index = 0;
    for (int i = 0; i < a; i++) {
      if (v[i] == 2) {
        index++;
        if (index == half) {
          k = i + 1;
          cout << k << endl;
          break;
        }
      }
    }
  }

  else {
    k = -1;
    cout << k << endl;
  }
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
