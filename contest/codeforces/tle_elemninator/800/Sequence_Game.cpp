// author: faisal ahammed
// date: 11:27:37 22-02-2025

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
        vector<int> ans;
        if(n == 1) ans.push_back(v[0]);
        else
        {
            ans.push_back(v[0]);
     
            for(int i=1;i<n;i++)
            {
                ans.push_back(v[i]);
    
                if(v[i] < v[i-1]) ans.push_back(v[i]);
            }
        }

        cout << ans.size() << "\n";
        for(auto n:ans) cout << n << " ";
        cout << "\n";
       
            
    }
}

int main()
{
    accepted();
    return 0;
}