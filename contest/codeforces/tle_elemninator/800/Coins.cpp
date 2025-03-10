// author: faisal ahammed
// date: 11:17:21 09-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    long long int t;cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        if(k%2 ==0)
        {
            if(n%2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if(n%2) cout << "YES\n";
            else
            {
                if(n>=k) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}

int main()
{
    accepted();
    return 0;
}