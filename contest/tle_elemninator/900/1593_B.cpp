// author: faisal ahammed
// date: 15:42:03 16-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        string s = to_string(n);
        int len= s.size();
        int ans = INT_MAX;


        int pos1 = s.rfind('0');
        if(pos1 != string::npos)
        {
            int pos2 = s.rfind('0', pos1 - 1);
            if(pos2 != string::npos)
                ans = min(ans, len-pos2-2);
        }
        // cout << ans << "\n";

        pos1 = s.rfind('5');
        if(pos1 != string::npos)
        {
            int pos2 = s.rfind('2', pos1 - 1);
            if(pos2 != string::npos)
                ans = min(ans, len-pos2-2);
        }
        // cout << ans << "\n";

        pos1 = s.rfind('0');
        if(pos1 != string::npos)
        {
            int pos2 = s.rfind('5', pos1 - 1);
            if(pos2 != string::npos)
                ans = min(ans, len-pos2-2);
        }
        // cout << ans << "\n";

        pos1 = s.rfind('5');
        if(pos1 != string::npos)
        {
            int pos2 = s.rfind('7', pos1 - 1);
            if(pos2 != string::npos)
                ans = min(ans, len-pos2-2);
        }



        cout << ans << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}