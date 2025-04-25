// author: faisal ahammed
// date: 20:49:04 24-04-2025

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
        int n,x;
        cin >> n >> x;

        if(n == x) 
        {
            for(int i=0;i<n;i++) cout << i << " ";
            cout << '\n';
        }
        else
        {
            for(int i=0;i<x;i++) cout << i << " ";
            for(int i=n-1;i>x;i--) cout << i << " ";
            cout << x << "\n";
        }

    
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}