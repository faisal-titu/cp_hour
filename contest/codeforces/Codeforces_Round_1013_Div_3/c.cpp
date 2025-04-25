// author: faisal ahammed
// date: 21:27:44 25-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int nn;
        cin >> nn;

        if(nn%2 == 0) cout << "-1\n";
        else
        {
            for(int i=0;i<nn;i++) cout << ((2*i) % nn) + 1 << " ";
            cout << "\n";
        }
    }
}

int main()
{
    accepted();
    return 0;
}