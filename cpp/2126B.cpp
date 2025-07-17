#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    short t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int i = 0;

        while (i <= n - k) {
            bool canHike = true;

            // Check if k consecutive days from i are all 0
            for (int j = 0; j < k; j++) {
                if (a[i + j] == 1) {
                    canHike = false;
                    break;
                }
            }

            if (canHike) {
                count++;
                i += k + 1;
            } else { 
                i++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
