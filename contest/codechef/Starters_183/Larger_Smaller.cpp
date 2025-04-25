// author: faisal ahammed
// date: 20:36:21 23-04-2025

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

        vector<int> num(n);
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            mx = max(mx, num[i]);
            mn = min(mn, num[i]);
        }

        if(mx-mn != 0) cout << mx-mn-1 << "\n";
        else cout << "0\n";
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}