// author: faisal ahammed
// date: 16:25:48 15-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t; cin >> t;

    while(t--)
    {
        long long int n, m;
        cin >> n >> m;

        if(n == m)
        {
            cout << "0 0\n";
            continue;
        }

        long long int num1 = abs(n - m);
        long long int diff = min(n% num1, num1-(m% num1));

        cout << num1 << " " << diff << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}