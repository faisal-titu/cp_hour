// author: faisal ahammed
// date: 12:20:29 29-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n, k;
        cin >> n >> k;

        vector<long long int> num(n);
        for(int i=0;i<n;i++) cin >> num[i];

        sort(num.begin(), num.end());

        long long int ans = 0, curr =0;
        for(int i=1;i<n;i++)
        {
            if(num[i] - num[i-1] <= k) curr++;
            else curr = 0;
            ans = max(ans, curr);
        }
        cout << n - ans-1 << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}