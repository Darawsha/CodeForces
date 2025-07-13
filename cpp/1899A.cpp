#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--) {
    int t;
    cin >> t;
    bool won = false;
    for (int i = 0; i < 10; i++) {
      if (i % 2 == 0) {
        if ((t + 1) % 3 == 0)
          t += 1;
        else if ((t - 1) % 3 == 0)
          t -= 1;
        else
          t += 1;

        if (t % 3 == 0) {
          cout << "First\n";
          won = true;
          break;
        }
      } else {
        if ((t + 1) % 3 != 0)
          t += 1;
        else
          t -= 1;
      }
    }
    if (!won)
      cout << "Second\n";
  }

  return 0;
}
