// author: faisal ahammed
// date: 21:18:44 14-05-2025

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
const int mod = 998244353;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void accepted()
{
    cases
    {
        int n;
        cin >> n;
        vi num(n);
        for(int i=0;i<n;i++) cin >> num[i];
        sort(all(num));

        ll ans = 1;
        for(int i=0;i<n;i++)
        {
            int c = num[i]-i;
            if(num[i]<=0) 
            {
                ans=0;
                break;

            }
            ans = (ans*c)%mod;
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