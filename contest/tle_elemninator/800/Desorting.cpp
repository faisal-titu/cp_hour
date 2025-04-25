// author: faisal ahammed
// date: 19:08:50 23-02-2025

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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        bool found = false;
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            mn = min(mn, v[i+1] - v[i]);
            if(v[i]> v[i+1])
            {
                found = true;
                break;
            }
        }
        if(!found) cout << mn/2+1 << "\n";
        else cout << "0\n";
    }
}

int main()
{
    accepted();
    return 0;
}