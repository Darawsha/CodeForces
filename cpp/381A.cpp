#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> cards(n);
  for (int i = 0; i < n; ++i) {
    cin >> cards[i];
  }

  int sereja = 0, dima = 0;
  int left = 0, right = n - 1;
  bool turn = true;

  while (left <= right) {
    int chosen;
    if (cards[left] > cards[right]) {
      chosen = cards[left++];
    } else {
      chosen = cards[right--];
    }

    if (turn)
      sereja += chosen;
    else
      dima += chosen;

    turn = !turn;
  }

  cout << sereja << " " << dima << "\n";

  return 0;
}
