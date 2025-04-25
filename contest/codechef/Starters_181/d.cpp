// author: faisal ahammed
// date: 20:47:43 09-04-2025

#include <bits/stdc++.h>
using namespace std;

bool bsearch(int x, vector<int> &a)
{
    int mid = a.size()/2;
    int l = 0;
    int r = a.size()-1;

    while(l <= r)
    {
        mid = (l+r)/2;
        if(a[mid] == x) return true;
        else if(a[mid] < x) l = mid+1;
        else r = mid-1;
    }
    return false;
}


void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        sort(a.begin(), a.end());

        int mn = a[0];
        int mx = a[n-1];

        if(!bsearch(mx+mx, a)) cout << mx << " " << mx << "\n";
        else if(!bsearch(mn+mx, a)) cout << mn << " " << mx << "\n";
        else if(!bsearch(mn+mn, a)) cout << mn << " " << mn << "\n";
        else cout << "-1\n";
        
        
    }
}

int main()
{
    accepted();
    return 0;
}