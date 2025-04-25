// author: faisal ahammed
// date: 12:16:27 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n>> m;
        vector<int> num(n);
        bool found = false;
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            if(num[i] == m) found = true;
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main()
{
    accepted();
    return 0;
}