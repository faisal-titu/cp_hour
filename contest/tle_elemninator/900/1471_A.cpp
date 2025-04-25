// author: faisal ahammed
// date: 14:20:25 15-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int n, x;
        cin >> n >> x;
        
        vector<long long int> v(n);
        long long int min =0, max =0;

        for(long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            max+= ceil((double)v[i]/x);
            min+= v[i];
            // cout << min << " " << max << "\n";

        }
        min = ceil((double)min/x);
        cout << min << " " << max << "\n";


    }
}

int main()
{
    accepted();
    return 0;
}