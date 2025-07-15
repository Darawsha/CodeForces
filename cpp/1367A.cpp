#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num_cases;
  cin >> num_cases;
  while (num_cases--) {
    string s;
    cin >> s;
    string result = "";
    result += s[0];
    for (int i = 1; i < s.size() - 1; i += 2) {
      result += s[i];
    }
    result += s.back();
    cout << result << endl;
  }
  return 0;
}
