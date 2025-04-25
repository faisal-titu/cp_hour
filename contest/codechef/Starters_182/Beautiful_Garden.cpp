// author: faisal ahammed
// date: 20:35:15 16-04-2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define go_go_go ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define cases int t; cin >> t; while(t--)
#define all(x) x.begin(), x.end()
#define pb push_back

#define pi pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pi>
#define vpl vector<pll>
const int mod = 1e9 + 7;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void accepted()
{
    cases
    {
        ll n,k,d;
        cin >> n >> k >> d;
        
        vl num(n);
        for(ll i=0;i<n;i++) cin >> num[i];
        sort(all(num));
        ll max_pick = (n-k)*d;

        ll ans =0;
        
        for(int i=0;i<n-k;i++)
        {
            ans += 1+ (d-1)/num[i];
        }
        cout << ans << "\n";


    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}