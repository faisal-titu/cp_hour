// author: faisal ahammed
// date: 15:57:26 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int n,m;
    cin >> n >> m;
    string a, b;
    cin >> a;
    cin >> b;
    bool flag = false;
    int ans = 0;


    for(int i=0;i<=5;i++)
    {
        if(a.find(b) != string::npos)
        {
            cout << i << "\n";
            return;
        }
        a += a;
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        accepted();
    return 0;
}