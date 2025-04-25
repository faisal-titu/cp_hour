// author: faisal ahammed
// date: 22:19:48 13-04-2025

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

const ll infl = 1e17 + 7;
const int inf = 1e8 + 7;
const int mod = 1e9 + 7;

#define yes cout << "YES\n"
#define no cout << "NO\n"

void accepted()
{
    case
    {
        int n;
        cin >> n;

        vector<vector<int>> num(n, vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0; j < n; j++)
                cin >> num[i][j];

        vector<int> ans(2*n+1, -1);
        vector<bool> visited(2*n+1, false);
        int track =2;

        for(int i=2;i<=n+1;i++) ans[i] = num[0][i-2];
        for(int i=n+2;i<=2*n;i++) ans[i] = num[i-n-1][n-1];

        for(int i=2;i<=2*n;i++) visited[ans[i]] = true;

        for(int i=1;i<=2*n;i++)
        {
            if(!visited[i])
            {
                ans[1] = i;
                break;
            }
        }
        for(int i=1;i<=2*n;i++) cout << ans[i] << " ";
        cout << "\n";
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}