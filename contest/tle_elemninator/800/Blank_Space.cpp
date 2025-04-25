// author: faisal ahammed
// date: 11:10:30 09-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int mx=0,curr_mx=0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0) curr_mx++;
            else curr_mx = 0;
            mx = max(mx, curr_mx);
        }
        cout << mx << endl;
    }
    
}

int main()
{
    accepted();
    return 0;
}