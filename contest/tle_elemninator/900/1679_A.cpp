// author: faisal ahammed
// date: 22:28:47 20-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t; cin >> t;

    while(t--)
    {
        long long int n; cin >> n;
        
        long long int ans = n/6;
        if(n%6 !=0) ans++;

        long long int mx = n/4;

        if(n%2 || n<4) cout << "-1\n";
        else cout << ans << " " << mx << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}
