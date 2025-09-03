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

  vector<string> nums = {"la",   "le", "lon", "sha", "she",
                         "shon", "ta", "te",  "ton"};
  unordered_map<string, int> dic;
  for (int i = 0; i < 9; i++)
    dic[nums[i]] = i;

  string s1, s2;
  cin >> s1 >> s2;

  auto to_num = [&](string s) {
    int x = 0, i = 0;
    for (int j = 1; j <= (int)s.size(); j++) {
      string sub = s.substr(i, j - i);
      if (dic.find(sub) != dic.end()) {
        x = x * 9 + dic[sub];
        i = j;
      }
    }
    return x;
  };

  auto to_s = [&](int x) {
    if (x == 0)
      return string("las");
    vector<int> digits;
    while (x > 0) {
      digits.push_back(x % 9);
      x /= 9;
    }
    reverse(digits.begin(), digits.end());
    string s = "";
    for (int d : digits)
      s += nums[d];
    s += "s";
    return s;
  };

  int a = to_num(s1), b = to_num(s2);
  cout << to_s(a + b) << "\n";

  return 0;
}
