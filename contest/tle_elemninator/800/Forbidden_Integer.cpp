// author: faisal ahammed
// date: 00:16:12 24-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin >> t;
    while(t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if(x!=1)
        {
            cout << "YES\n" << n << "\n";
            for(int i=0;i<n;i++) cout << "1 ";
            cout << "\n";
        }
        else if(k>=2 && n%2 ==0)
        {
            cout << "YES\n" << n/2 << "\n";
            for(int i=0;i<n/2;i++) cout << "2 ";
            cout << "\n";
        }
        else if(k>=3)
        {
            cout << "YES\n" << n/2 << "\n3 ";
            for(int i=0;i<(n/2)-1;i++) cout << "2 ";
            cout << "\n";
        }
        else cout << "NO\n";
    }
}

int main()
{
    accepted();
    return 0;
}