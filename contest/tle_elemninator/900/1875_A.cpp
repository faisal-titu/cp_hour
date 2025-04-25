// author: faisal ahammed
// date: 16:49:35 28-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    long long int t;
    cin >> t;

    while(t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
    
        vector<long long int> arr(n);
        for(long long int i = 0; i < n; i++) cin >> arr[i];
    
        long long int ans = b;
        for(long long int i = 0; i < n; i++)
            ans += min(a-1, arr[i]);

        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}