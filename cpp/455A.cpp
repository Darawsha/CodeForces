#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#define ll long long

using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  vector<int> numbers(n);
  map<int, ll> freq;

  int max_val = 0;

  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
    freq[numbers[i]]++;
    max_val = max(max_val, numbers[i]);
  }

  ll prev = 0;
  ll curr = freq[1];
  ll result = curr;

  for (int i = 2; i <= max_val; i++) {
    ll take = prev + freq[i] * i;
    ll skip = curr;

    result = max(take, skip);
    prev = curr;
    curr = result;
  }

  cout << result << "\n";
  return 0;
}
