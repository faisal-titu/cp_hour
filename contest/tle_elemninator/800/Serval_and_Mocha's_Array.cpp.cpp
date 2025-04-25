// author: faisal ahammed
// date: 14:01:32 10-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        bool found = false;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(v[i], v[j]) <=2)
                {
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main()
{
    accepted();
    return 0;
}