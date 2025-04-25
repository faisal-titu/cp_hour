// author: faisal ahammed
// date: 12:55:47 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int n, mn = INT_MAX;
    bool zero = false;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a == 0) zero = true;
        mn = min(abs(a), mn);
    }

    // if(zero) cout << "0\n";
    cout << mn << "\n";
}

int main()
{
    accepted();
    return 0;
}