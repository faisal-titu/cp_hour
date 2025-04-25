// author: faisal ahammed
// date: 20:40:32 09-04-2025

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

        int z=0, ok=0;

        for(auto ch:s)
        {
            if(ch == '0') z++;
            else z--;

            if(z == 0) ok++;
        }
        int ans =1;
        for(int i=0;i<ok;i++) ans *= 2;
        cout << ans << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}