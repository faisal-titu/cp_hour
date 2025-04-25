// author: faisal ahammed
// date: 11:55:57 28-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;

        long long int min_sum = 0, max_sum = 0;
        
        min_sum = k*(k+1)/2;
        max_sum = k*n - k*(k-1)/2;


        if(x >= min_sum && x <= max_sum) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    accepted();
    return 0;
}