// author: faisal ahammed
// date: 22:48:51 18-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int multiplier = 10, ans = 0;
        for(int i=10;i<=n;i+=multiplier)
        {
            ans++;
            if(i == multiplier * 10) multiplier *= 10;
        }
        if(n <10) cout << n << "\n";
        else cout << ans+9 << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}