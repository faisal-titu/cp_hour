// author: faisal ahammed
// date: 14:49:08 21-02-2025

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
        int ans =0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]%2 && v[i+1]%2) ans++;
            if(v[i]%2 == 0 && v[i+1]%2 == 0) ans++;
        }
        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}