// author: faisal ahammed
// date: 20:38:40 08-04-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int zero = 0, ans = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0' ) zero++;
            else ans = max(ans, zero+1);
        }
        cout << s.size() - ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}