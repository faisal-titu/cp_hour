// author: faisal ahammed
// date: 20:31:44 16-04-2025

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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int b=0,g=0;
        for(auto ch:s)
        {
            if(ch == 'B') b++;
            else g++;

            if(b > 2*g) break;
        }
        cout << b+g << "\n";
        
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}