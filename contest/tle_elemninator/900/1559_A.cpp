// author: faisal ahammed
// date: 17:15:12 19-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t; cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans = a[0];

        for(int i=1;i<n;i++) ans &= a[i];
        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}