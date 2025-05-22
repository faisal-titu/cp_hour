// author: faisal ahammed
// date: 20:40:08 30-04-2025

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
        string s, t;
        cin >> s >> t;

        int one = 0;bool found = false;
        for(int i=0;i<n;i++)
        {
            if(t[i] == '1' && s[i] == '0')
            {
                found = true;
                break;
            }
        }

        if(found)
        {
            cout << "No\n";
            continue;
        }
        

        int ones=0, onet=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1') ones++;
            if(t[i] == '1')onet++;
        }

        if(ones < onet || (ones-onet)%2 != 0) cout << "No\n";
        else cout << "Yes\n";
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}