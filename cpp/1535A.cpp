#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int s0, s1, s2, s3;
    cin >> s0 >> s1 >> s2 >> s3;
    int max1 = max(s0, s1);
    int max2 = max(s2, s3);
    vector<int> v = {s0, s1, s2, s3};
    sort(v.begin(), v.end());
    cout << ((max1 == v[3] and max2 == v[2])
            or (max1 == v[2] and max2 == v[3])? "YES":"NO")<< endl;
  }

  return 0;
}
