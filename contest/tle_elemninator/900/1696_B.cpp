// author: faisal ahammed
// date: 23:06:40 19-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t; cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int zero = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0) zero++;
        }
        bool found = false;
        for(int i = 1; i < n-1; i++)
        {
            if(a[i] == 0)
            {
                found = true;
                break;
            }
        }
        
        if(zero == n) cout << "0\n";
        else if(found) cout << "2\n";
        else cout << "1\n";

    }
}

int main()
{
    accepted();
    return 0;
}