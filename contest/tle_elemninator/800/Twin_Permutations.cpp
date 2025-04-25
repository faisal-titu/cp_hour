// author: faisal ahammed
// date: 13:49:42 10-03-2025

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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];


        for(int i=0;i<n;i++) cout << n+1 - v[i] << " ";
        cout << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}