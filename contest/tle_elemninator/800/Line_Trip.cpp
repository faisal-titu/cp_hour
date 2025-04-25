// author: faisal ahammed
// date: 10:45:47 18-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;
        
        int mx = 0, previous = 0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >>a;
            mx = max(mx, a-previous);
            // cout << mx << " ";
            previous = a;
        }
        // cout << "\n\n";
        // cout << mx << "\n";
        mx = max(mx, 2*(x-previous));
        cout << mx << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}