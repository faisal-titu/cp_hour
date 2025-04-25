// author: faisal ahammed
// date: 19:43:41 10-03-2025

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        int ans = 0;
        int two = 0;

        while (n > 1 && two < 2)
        {
            if (n % 6 == 0)
            {
                two = 0;
                n /= 6;
                ans++;
            }
            else
            {
                n *= 2;
                ans++;
                two++;
            }
        }
        if (n == 1 && two < 2)
        {
            cout << ans << endl;
        }
        else
            cout << -1 << endl;
    }
}