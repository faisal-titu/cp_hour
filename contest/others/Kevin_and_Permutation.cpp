// author: faisal ahammed
// date: 22:13:40 10-04-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, temp;
        cin >> n;

        int start = 1;
        int last = n/2 + 1;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(i%2) ans.push_back(start++);
            else ans.push_back(last++);
        }
        for(auto ns:ans) cout << ns << " ";
        cout << "\n";
        ans.clear();

    }
}

int main()
{
    accepted();
    return 0;
}