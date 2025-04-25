// author: faisal ahammed
// date: 19:16:15 16-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t; cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        if(s[0] == s[n-1]) 
        {
            cout << s << "\n";
            continue;
        }
        else if(s[0] == 'a') s[0] = 'b';
        else if(s[0] == 'b') s[0] = 'a';
        


        cout << s << "\n";


        
    }
}

int main()
{
    accepted();
    return 0;
}