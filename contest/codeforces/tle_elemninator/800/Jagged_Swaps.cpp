// author: faisal ahammed
// date: 15:39:58 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int mx = v[0], mn = v[0];

        for(int i=0;i<n;i++)
        {
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        } 

        // cout << mx << " " << mn << " ";
        if(v[0] == mx) cout << "NO\n";
        else if(v[0] != mn) cout << "NO\n";
        else cout << "YES\n";

        
    }
}

int main()
{
    accepted();
    return 0;
}