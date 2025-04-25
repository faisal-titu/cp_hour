// author: faisal ahammed
// date: 20:57:44 25-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    
    
    int t;
    cin >> t;  
    
    while(t--)
    {
        int zero = 3;
        int one = 1;
        int two = 2;
        int three = 1;
        int five = 1;
        int count_zero = 0;
        int count_one = 0;
        int count_two = 0;
        int count_three = 0;
        int count_five = 0;
        
        int n;
        cin >> n;

        vector<int> num(n);
        int ans = -1;
        for(int i=0;i<n;i++) cin >> num[i];
        for(int i=0;i<n;i++)
        {
            if(num[i] == 0) count_zero++;
            else if(num[i] == 1) count_one++;
            else if(num[i] == 2) count_two++;
            else if(num[i] == 3) count_three++;
            else if(num[i] == 5) count_five++;

            if(count_zero >= zero && count_one >= one && count_two >= two && count_three >= three && count_five >= five)
            {
                ans = i+1;
                break;
            }
        }
        if(ans == -1) cout << "0\n";
        else cout << ans << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}