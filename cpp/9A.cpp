#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  int maxNum = max(n, m);
  int chance = 7 - maxNum;
  int total = 6;
  int a = chance;
  int b = total;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  int gcd = a;

  cout << chance / gcd << "/" << total / gcd << endl;

  return 0;
}
