// author: faisal ahammed
// date: 21:04:39 10-03-2025

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
        int mx = INT_MIN;

        int idx;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]>=mx)
            {
                mx = v[i];
                idx = i;
            }
        }

        int p, q, r;
        bool found = false;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                cout << "YES\n";
                cout << i <<  " " << i+1 << " " << i+2 <<"\n";
                found = true;
                break;
            }
        }
        if(!found) cout << "NO\n";

    }
}

int main()
{
    accepted();
    return 0;
}