// author: faisal ahammed
// date: 01:01:20 24-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int plus = 0, minus = 0, sum=0;

        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a ==1) plus++;
            else minus++;
        }
        int operations = 0;

        while(minus > plus || minus%2 == 1)
        {
            minus--;
            plus++;
            operations++;
        }
        
        cout << operations << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}