#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>   use this line if you want to include all standard libraries
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    vector<int> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        int count = 0, num = 1;
        while (true)
        {
            if (num % 3 != 0 && num % 10 != 3)
            {
                count++;
                if (count == a[i])
                {
                    cout << num << '\n';
                    break;
                }
            }
            num++;
        }
    }
    return 0;
}
