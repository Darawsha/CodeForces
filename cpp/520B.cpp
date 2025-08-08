#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int operations = 0;

    while (m > n) {
        if (m % 2 == 0) {
            m /= 2;
        } else {
            m += 1;
        }
        operations++;
    }

    operations += (n - m);
    cout << operations << endl;

    return 0;
}
