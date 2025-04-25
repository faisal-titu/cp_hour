// author: faisal ahammed
// date: 21:10:05 24-04-2025

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
        int n,k;
        cin >> n >> k;
        vi a(n), b(n);

        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        ll chk = -1;
        bool found = false;

        for(int i=0;i<n;i++)
        {
            if(b[i] != -1)
            {
                ll sum = a[i] + b[i];
                if(chk == -1) chk = sum;
                else if(chk != sum)
                {
                    found = true;
                    break;
                }
            }
        }

        if(found) cout << "0\n";
        else if(chk == -1)
        {
            ll mx = *max_element(all(a));
            ll mn = *min_element(all(a));

            cout << max(0ll, mn+k-mx+1) << "\n";
        } 
        else
        {
            for(int i=0;i<n;i++)
            {
                if(b[i] == -1)
                {
                    ll baki = chk - a[i];
                    if(baki >k || baki<0)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if(found) cout << "0\n";
            else cout << "1\n";
        }
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}