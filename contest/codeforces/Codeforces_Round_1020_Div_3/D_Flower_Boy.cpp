// author: faisal ahammed
// date: 21:52:16 24-04-2025

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

bool mile_kina(vector<ll> &a, vector<ll> &b)
{
    int n = a.size();
    int m = b.size();
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i] >= b[j]) j++;
        i++;
    }
    
    return j==m;
}

bool a_te_add(ll mid, vector<ll> &a, vector<ll> &b)
{
    for(int i=0;i<=a.size();i++)
    {
        vector<ll> temp = a;
        temp.insert(temp.begin() + i, mid);
        if(mile_kina(temp, b)) return true;
    }
    return false;
}

void accepted()
{
    cases
    {   
        int n,m;
        cin >> n >> m;
        vll a(n), b(m);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];

        if(mile_kina(a, b))
        {
            cout << "0\n";
            continue;
        }

        ll l=0,h=10e9, ans=-1;

        while(l<=h)
        {
            ll mid = (l+h)/2;

            if(a_te_add(mid, a, b))
            {
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
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