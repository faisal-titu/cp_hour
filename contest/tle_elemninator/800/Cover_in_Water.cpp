// author: faisal ahammed
// date: 09:36:21 19-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;string s;
        cin >> n >> s;
        bool three = false;
        char prev = '.';
        int cnt = 0, ans = 0;


            for(int i=0;i<n;i++) if(s[i] == '.') ans++;
            for(int i=0;i<n-2;i++)
            {
                // if(s[i] == '.') cnt++;
                if(s[i] == '.' && s[i] == s[i+1] && s[i+1] == s[i+2])
                {
                    three = true;
                    break;
                }
            }

            if(three) cout << "2\n";

            else cout << ans << "\n";


    }
}

int main()
{
    accepted();
    return 0;
}