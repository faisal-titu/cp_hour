// author: faisal ahammed
// date: 22:09:44 11-05-2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define go_go_go ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define cases int t; cin >> t; while(t--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pi>
#define vpl vector<pll>
const int mod = 1e9 + 7;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void accepted()
{
    cases
    {
        int n;
        cin >> n;

        vector<vector<int>> ans(n, vector<int>(n));
        int num = 0;
        if(n%2 == 0)
        {
            for(int i=0;i<n;i++) 
            {
                for(int j=0;j<n;j++) 
                    ans[i][j] = num++;
            }
        }
        // else if(n==3)
        // {
        //     vector<int> temp = {8,4,5,6,0,1,7,2,3};
        //     for(int i = 0; i < n; i++) 
        //     {
        //         for(int j = 0; j < n; j++) 
        //             ans[i][j] = temp[i*n+j];
        //     }
        // }
        else
        {
            for(int i=0;i<n;i++) 
            {
                if(i%2==0) 
                {
                    for(int j=0;j<n;j++) 
                        ans[j][i] = num++;
    
                } 
                else 
                {
                    for(int j =n-1;j>=0;j--)
                        ans[j][i] = num++;
                }
            }

        }
        for(auto row:ans)
         {
            for(int val: row)
                cout << val << ' ';
            cout << '\n';
        }
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}