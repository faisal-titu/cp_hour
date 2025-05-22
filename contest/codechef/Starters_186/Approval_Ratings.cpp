// author: faisal ahammed
// date: 20:34:38 14-05-2025

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
        vi num(5);
        ll sum=0;
        for(int i=0;i<5;i++)
        {
            cin >> num[i];
            sum += num[i];
        } 

        if(sum>=35) cout << "0\n";
        else
        {
            sort(all(num));

            ll ans=0, i=0;
            while(sum<35)
            {
                sum += 10-num[i];
                ans+=100;
                i++;
                if(i>5) break;
            }
            cout << ans << "\n";
        }

    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}