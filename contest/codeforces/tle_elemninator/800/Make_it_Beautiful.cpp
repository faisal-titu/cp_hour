// author: faisal ahammed
// date: 15:00:52 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;cin >>n;
        vector<int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];

        if(v[0] == v[n-1]) cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << v[0] << " ";
            for(int i=n-1;i>=1;i--) cout << v[i] << " ";
            cout << "\n";
        }

    }
}

int main()
{
    accepted();
    return 0;
}