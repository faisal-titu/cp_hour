// author: faisal ahammed
// date: 23:24:25 13-04-2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define go_go_go ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define case int t; cin >> t; while(t--)
#define all(x) x.begin(), x.end()
#define pb push_back

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pi>
#define vpl vector<pll>

const ll infl = 1e17 + 7;
const int inf = 1e8 + 7;
const int mod = 1e9 + 7;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void accepted()
{
    case
    {
        string p,s;
        cin >> p >> s;

        int n = p.size();
        int m = s.size();

        int i=0,j=0;
        while(i<n && j<m)
        {
            if(p[i] == s[j] || p[i] == s[j+1])
            {
                i++;
                if(p[i] == s[j+1]) j++;
            }
        }
        if(i == n-1 && j == m-1) yes;
        else no;


    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}