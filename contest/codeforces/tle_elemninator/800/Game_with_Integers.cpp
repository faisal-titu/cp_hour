// author: faisal ahammed
// date: 11:42:53 21-02-2025

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

        if(n%3 ==0) cout << "Second\n";
        else cout << "First\n";
    }
}

int main()
{
    accepted();
    return 0;
}