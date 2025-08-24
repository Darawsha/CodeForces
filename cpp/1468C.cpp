#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define ll long long
#define vi vector<int>
#define str string
using namespace std;
#define endl '\n'
// Not submitted
int main() {
#ifndef ONLINE_JUDGE
  freopen("../0.3", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q;
  if (!(cin >> q))
    return 0;

  queue<int> fifo;
  priority_queue<pair<int, int>> richest;
  vector<unsigned char> served(q + 5, 0);
  vector<int> ans;
  int nextId = 0;

  auto clean_fifo = [&] {
    while (!fifo.empty() && served[fifo.front()])
      fifo.pop();
  };
  auto clean_richest = [&] {
    while (!richest.empty() && served[-richest.top().second])
      richest.pop();
  };

  for (int i = 0; i < q; ++i) {
    int t;
    cin >> t;
    if (t == 1) {
      int m;
      cin >> m;
      ++nextId;
      fifo.push(nextId);
      richest.push({m, -nextId});
    } else if (t == 2) {
      clean_fifo();
      int id = fifo.front();
      fifo.pop();
      served[id] = 1;
      ans.push_back(id);
    } else { // t == 3
      clean_richest();
      int id = -richest.top().second;
      richest.pop();
      served[id] = 1;
      ans.push_back(id);
    }
  }

  for (size_t i = 0; i < ans.size(); ++i) {
    if (i)
      cout << ' ';
    cout << ans[i];
  }
  cout << '\n';
  return 0;
}
