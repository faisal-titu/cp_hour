// author: faisal ahammed
// date: 14:33:53 15-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int64_t n;
        cin >> n;

        if(n & (n-1)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    accepted();
    return 0;
}