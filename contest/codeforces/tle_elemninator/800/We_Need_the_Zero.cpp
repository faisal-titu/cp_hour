// author: faisal ahammed
// date: 15:44:40 10-03-2025

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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            ans ^= v[i];
        } 
        if(n%2==0)
        {
            if(ans == 0) cout << "12\n";
            else cout << "-1\n";
        }
        else cout << ans << "\n";


    }
}

int main()
{
    accepted();
    return 0;
}