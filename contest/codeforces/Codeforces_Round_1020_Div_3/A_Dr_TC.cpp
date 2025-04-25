// author: faisal ahammed
// date: 20:35:14 24-04-2025

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
        string s;
        cin >> s;
        int ans = 0, ek=0;
        for(auto ch:s) if(ch == '1') ek++;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0') ans += ek + 1;
            else ans += ek - 1;
        }
        cout << ans << '\n';
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}