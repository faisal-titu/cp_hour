// author: faisal ahammed
// date: 22:08:02 10-04-2025

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

        string s;
        cin >> s;
        int ans = 0;
        for(auto ch:s)
        {
            if(ch == 'Q') ans++;
            else ans--;

            if(ans < 0) ans = 0;
        }
        if(!ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main()
{
    accepted();
    return 0;
}