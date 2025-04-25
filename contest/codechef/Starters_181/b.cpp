// author: faisal ahammed
// date: 20:32:56 09-04-2025

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
        vector<int> a(n);

        for(int i=0;i<n;i++) cin >> a[i];

        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += a[i]-1;
        }
        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}