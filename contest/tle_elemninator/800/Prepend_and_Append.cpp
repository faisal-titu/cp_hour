// author: faisal ahammed
// date: 15:19:40 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = 0;

        for(int i=0;i<n/2;i++)
        {
            if(s[i] == '1' && s[n-i-1] == '0') ans+=2; 
            else if(s[i] == '0' && s[n-i-1] == '1') ans+=2;
            else break;
        }
        cout << n-ans <<"\n";
    }
}

int main()
{
    accepted();
    return 0;
}