// author: faisal ahammed
// date: 20:46:02 11-05-2025

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
        int n;
        cin >> n;
        vi num(n);
        for(int i=0;i<n;i++) cin >> num[i];

        if(n==1)
        {
            yes;
            continue;
        }

        int mid = (n+1)/2;
        int cnt1=0, cnt2=0;

        for(int i=1;i<n;i++)
        {
            if(abs(num[i]) >= abs(num[0])) cnt1++;
        }

        int lagbe = min(mid-1, n-mid);
        
        if(cnt1 >= lagbe) yes;
        else no;
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}