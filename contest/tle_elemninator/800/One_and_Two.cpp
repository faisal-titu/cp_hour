// author: faisal ahammed
// date: 11:54:55 22-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, two = 0, another=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i] == 2) two++;
        }
        if(two%2) cout << "-1\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                if(v[i] == 2) another++;
                if(another == two/2)
                {
                    cout << i+1 << "\n";
                    break;
                }
            }
        }

    }
}

int main()
{
    accepted();
    return 0;
}