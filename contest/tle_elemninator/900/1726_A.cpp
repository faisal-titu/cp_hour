// author: faisal ahammed
// date: 14:05:03 20-03-2025

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
        vector<int> num(n);
        int mx = INT_MIN, mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            mx = max(mx, num[i]);
            mn = min(mn, num[i]);
        }
        sort(num.begin(), num.end());
        cout << num[n-1] - num[0] << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}