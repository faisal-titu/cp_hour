// author: faisal ahammed
// date: 22:44:20 17-04-2025

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
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        int mid = a+b+c -mx-mn;

        if(mn%2 && mid%2) cout << mn+mid-1 << "\n";
        else cout << mn+mid << "\n";
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}