// author: faisal ahammed
// date: 20:37:26 07-05-2025

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
    int mxx = 30000000;
    vector<bool> is_prime(mxx+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i*i<=mxx;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=mxx;j+=i) is_prime[j] = false;
        }
    }
    for(int i=2;i<=mxx;i++)
    {
        if(is_prime[i]) primes.pb(i);
    }


    cases
    {
        int n, k;
        cin >> n >> k;
        

        if(n-1>k) cout << "-1\n";
        else
        {
            ll x = k-n+2;

            vll ans(n);
            ans[0] = x;
            ans[1] = x*2;

            auto it = lower_bound(all(primes), ans[1]+1);

            if(it == primes.end() || primes.end() - it < n-2)
            {
                cout << "-1\n";
            }
            else
            {
                for(int i=2;i<n;i++)
                {
                    ans[i] = *it;
                    it++;
                }
                for(auto z:ans) cout << z << " ";
                cout << "\n";
            }

        }
    }
}

int main()
{
    go_go_go;
    accepted();
    return 0;
}