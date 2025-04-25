// author: faisal ahammed
// date: 21:14:13 25-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    long long int t;
    cin >> t;

    while(t--)
    {
        long long int n, x;
        cin >> n >> x;

        vector<long long int> num(n);
        for(int i=0;i<n;i++) cin >> num[i];

        sort(num.begin(), num.end(), greater<long long int>());
        int ans = 0;
        int member = 0;

        for(int i=0;i<n;i++)
        {
            member++;
            if(num[i]*member >= x)
            {
                ans++;
                member = 0;
            }
        }

        cout << ans << "\n";
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    accepted();
    return 0;
}