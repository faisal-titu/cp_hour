// author: faisal ahammed
// date: 19:06:43 21-02-2025

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
        vector<int> v(n);
        map<int, int> freq;

        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        } 
        // cout << freq.size() << " ";
        if(freq.size() > 2) cout << "No\n";
        else
        {
            int first = freq.begin()->second;
            int second = freq.rbegin()->second;

            if(abs(first - second) <=1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}

int main()
{
    accepted();
    return 0;
}