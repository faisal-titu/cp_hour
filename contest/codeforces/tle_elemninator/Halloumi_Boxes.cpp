// author: faisal ahammed
// date: 10:17:45 18-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        vector<int> temp = a;
        sort(temp.begin(), temp.end());

        if(temp == a)
        {
            cout << "YES\n";
            continue;;
        }
        if(k == 1) cout << "NO\n";
        else cout << "YES\n"; 
    }
}

int main()
{
    accepted();
    return 0;
}