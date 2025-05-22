// author: faisal ahammed
// date: 21:32:42 21-05-2025

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
        int x, y, k;
        cin >> x >> y >> k;

        if((min(x, y) <=k) && (max(x,y)<=2*k)) cout << "Alice\n";
        else cout << "Bob\n";
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}