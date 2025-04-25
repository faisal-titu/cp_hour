// author: faisal ahammed
// date: 21:14:24 29-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;

        int start =1, mx = INT_MIN;
        char prev = '1';

        for(int i=1;i<len;i++)
        {
            if(s[i] == s[i-1]) start++;
            else start =1;
            mx = max(mx, start);
        }
        if(len ==1) cout << "2\n";
        else cout << mx+1 << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}