// author: faisal ahammed
// date: 15:54:30 10-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1, x2, y1, y2, ans=0;
        cin >> x1 >> y1 >> x2 >> y2;
    
        int ydiff = y2-y1;
        if(ydiff < 0) 
        {
            cout << "-1\n";
            continue;
        }
        ans += ydiff;
        x1 += ydiff;

        int xdiff = x2 - x1;
        if(xdiff>0)
        {
            cout << "-1\n";
            continue;
        }
        ans+=abs(xdiff);

        cout << ans << "\n";
    }


}

int main()
{
    accepted();
    return 0;
}