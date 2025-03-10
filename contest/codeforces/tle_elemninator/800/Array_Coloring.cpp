// author: faisal ahammed
// date: 18:45:51 23-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n, odd =0 , even = 0;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            odd += v[i];
        }
        
        if(odd%2) cout << "NO\n";
        else cout << "YES\n";
    }
}

int main()
{
    accepted();
    return 0;
}