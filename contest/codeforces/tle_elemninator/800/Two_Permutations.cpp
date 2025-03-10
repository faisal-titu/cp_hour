// author: faisal ahammed
// date: 14:39:43 07-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if(a+b <= n-2 || n==a && n==b) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    accepted();
    return 0;
}