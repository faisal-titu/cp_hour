// author: faisal ahammed
// date: 22:27:32 29-03-2025

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

    
        for(int i=1;i<n;i+=2)
        {
            if(num[i] % num[i-1] == 0) num[i] = num[i]+1;
            
        }
        for(int i=0;i<n;i++) cout << num[i] << " ";
        cout << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}