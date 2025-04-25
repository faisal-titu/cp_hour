// author: faisal ahammed
// date: 20:51:15 26-03-2025

#include <bits/stdc++.h>
using namespace std;


void accepted()
{
    long long int t;
    cin >> t;

    while(t--)
    {
        long long int n, k;
        cin >> n >> k;

        vector<long long int> initial(n), final(n);
        for(int i=0;i<n;i++) cin >> initial[i];
        for(int i=0;i<n;i++) cin >> final[i];

        bool found = false;
        long long int min_move = 0;
        for(long long int i=0;i<n;i++)
        {
            long long int diff = abs(initial[i] - final[i]);
            long long int cost = min(diff, 9 - diff);
            
            min_move += cost;

        }
        // cout << min_move << " ";
        if(min_move == 0 && k == 9) cout << "Yes\n";
        else if(min_move <= k && (k- min_move) ==5) cout << "Yes\n";
        
        else if(min_move <= k && (k - min_move) % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
    
    }
}

int main()
{
    accepted();
    return 0;
}