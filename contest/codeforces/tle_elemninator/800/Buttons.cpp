// author: faisal ahammed
// date: 18:15:25 23-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin >>t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(c%2 && a>b) cout << "First\n";
        else if(c%2 && b>a) cout << "Second\n";
        else if(c%2 == 0 && b>=a) cout << "Second\n";
        else cout << "First\n";
    }
}

int main()
{
    accepted();
    return 0;
}