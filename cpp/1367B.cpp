#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mismatch_even = 0;
        int mismatch_odd = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0)
                    mismatch_even++;
                else
                    mismatch_odd++;
            }
        }

        if (mismatch_even == mismatch_odd) {
            cout << mismatch_even << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
