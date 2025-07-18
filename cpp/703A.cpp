#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  short t;
  cin >> t;
  short mishkaScore = 0, chrisScore = 0;
  while (t--) {

    short Mishka, Chris;
    cin >> Mishka >> Chris;
    if (Mishka > Chris) {
      mishkaScore++;
    } else if (Chris > Mishka) {
      chrisScore++;
    }
  }
  if (mishkaScore > chrisScore) {
    cout << "Mishka" << endl;
  } else if (chrisScore > mishkaScore) {
    cout << "Chris" << endl;
  } else {
    cout << "Friendship is magic!^^" << endl;
  }

  return 0;
}
