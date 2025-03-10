// author: faisal ahammed
// date: 12:23:18 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int neg = 0, pos = 0;        
        for(int i=0;i<n-1;i++)
        {
            int a;
            cin >> a;
            // cout << a << " ";
            if(a < 0) neg -= a;
            else pos += a;
        }
        // cout << "\n";
        cout << abs(neg) - pos << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}