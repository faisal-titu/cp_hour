// author: faisal ahammed
// date: 20:35:27 26-03-2025

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
        vector<int> num(n);
        for(int i=0;i<n;i++) cin >> num[i];
        int last = num[n-1];
        int postition = -1;
        for(int i=0;i<n-1;i++)
        {
            if(num[i] >= last)
            {
                postition = i;
                break;
            }
        }
        if(postition == -1) cout << "0\n";
        else cout << n-(postition+1) << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}