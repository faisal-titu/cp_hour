// author: faisal ahammed
// date: 12:41:24 13-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v((n*k));
        
        for(int i=0;i<n*k;i++) cin >> v[i];
        

        long long int ans =0;

        int index = n*k;
        while(k--)
        {
            index -= n/2 + 1;
            ans += v[index];
        }

        cout << ans << "\n";
    }

}

int main()
{
    accepted();
    return 0;
}