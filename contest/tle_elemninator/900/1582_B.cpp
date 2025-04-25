// author: faisal ahammed
// date: 17:22:03 16-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    long long int t;cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        long long int zero = 0, one = 0;
        for(long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0) zero++;
            else if(a[i] == 1) one++;
        }
        cout << one * (long long int)pow(2, zero) << "\n";
        // if(one>0 && zero ==0) cout << one + zero << "\n";
        // else if(one>0 && zero>0) cout << one + zero + 1 << "\n";
        // else cout << "0\n";
        // if(zero == 0) cout << "0\n";
        // else if(one == 1) cout << "1\n";
        // else cout << (long long int)sqrt(pow(2, zero+one+1)) << "\n";
        // if(zero   == n) cout << "0\n";
        // else if(zero == 0 && one == 0) cout << "0\n";
        // else if(one >0 && zero ==0) cout << one << "\n";
        // else if(one == 1 && zero ==1) cout << "2\n";
        // else cout << one + zero+1 << "\n";
    }

}

int main()
{
    accepted();
    return 0;
}