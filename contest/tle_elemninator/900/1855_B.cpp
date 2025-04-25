// author: faisal ahammed
// date: 11:42:19 29-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        long long int ans = 0;

        for(long long int i = 1;i<=50;i++)
        {
            if(n%i == 0)
            {
                ans++;
                // cout << i << " ";
            } 
            else break;
        }
        // cout << "\n";

        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}