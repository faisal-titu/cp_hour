// author: faisal ahammed
// date: 09:44:37 14-04-2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define go_go_go ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define case int t; cin >> t; while(t--)
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
    case
    {
        int n,m,k;
        cin >> n >> m >> k;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(j <= i) cout << (i - j + 1) << " ";
                else cout << (j - i + 1) << " ";
            }
            cout << "\n";
        }
    }
    cout << "\n";
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}