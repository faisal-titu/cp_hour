// author: faisal ahammed
// date: 21:27:53 08-04-2025

#include <bits/stdc++.h>
using namespace std;


bool prime(long long int n)
{
    if(n < 2) return false;

    for(long long int i = 2;i*i<= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int x, k;
        cin >> x >> k;

        if(k==1)
        {
            if(prime(x)) cout << "YES\n";
            else cout << "NO\n";
        } 
        else
        {
            if(x==1 && k==2) cout << "YES\n";
            else cout << "NO\n";
        }
    }

}

int main()
{
    accepted();
    return 0;
}