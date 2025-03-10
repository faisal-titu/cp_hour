// author: faisal ahammed
// date: 17:33:33 23-02-2025

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

        vector<int> v(n), b, c;
        for(int i=0;i<n;i++) cin >> v[i];

        sort(v.begin(), v.end());
        int i=0;
        while(i < n && v[i] == v[0])
        {
            b.push_back(v[i]);
            i++;
        }

        while(i < n)
        {
            c.push_back(v[i]);
            i++;
        }

        if(c.size() == 0) cout << "-1\n";
        else
        {
            cout << b.size() << " "  << c.size() << "\n";
            for(auto n:b) cout << n << " ";
            cout << "\n";
            for(auto n:c) cout << n << " ";
            cout << "\n";
        }

    }
}

int main()
{
    accepted();
    return 0;
}