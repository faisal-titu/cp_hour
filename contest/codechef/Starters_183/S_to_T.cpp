// author: faisal ahammed
// date: 20:44:37 23-04-2025

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
        string s,t;
        cin >> n >> s >> t;

        if(s[0] != t[0]) cout << "-1\n";
        else
        {
            vector<int> pos;
            bool found = false;
            int cnt = 0;
            int p=n-1;
            for(int i=0;i<n;i++)
            {
                if(s[i] =='1')
                {
                    p=i;
                    break;
                }
            }
            
            for(int i=0;i<=p;i++)
            {
                if(s[i] != t[i])
                {
                    found = true;
                    break;  
                }
            }

            if(!found)
            {
                for(int i=p;i<n;i++)
                {
                    
                }
            }
            else cout << "-1\n"

        }
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}