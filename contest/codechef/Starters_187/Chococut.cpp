// author: faisal ahammed
// date: 20:58:58 21-05-2025

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
        int n, m, k;
        cin >> n >> m >> k;

        int ans =0;
        if(k == 0) cout << n*m << "\n";
        else
        {
            for(int i=1;i<n;i++)
            {
                int upper = i*m;
                int lower = (n-i)*m;

                if(upper>=k && lower>=k) ans = max(ans, (n*m)-min(upper, lower));
                else if(upper >=k) ans = max(ans, lower);
                else if(lower>=k) ans = max(ans, upper); 
            }


            for(int j=1;j<m;j++)
            {
                int left = n*j;
                int right = n*(m-j);


                if(left>=k && right>=k) ans = max(ans, (n*m)-min(left, right));
                else if(left >=k) ans = max(ans, right);
                else if(right>=k) ans = max(ans, left); 
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