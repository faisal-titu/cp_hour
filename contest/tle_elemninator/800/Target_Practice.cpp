// author: faisal ahammed
// date: 12:34:47 21-02-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;
    while(t--)
    {
        char target[10][10];
        for(int i=0;i<10;i++) cin >> target[i];
        int score = 0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(target[i][j] == 'X')
                {
                    if((i == 0 || i == 9) || (j == 0 || j == 9)) score += 1;
                    else if((i == 1 || i == 8) || (j == 1 || j == 8)) score += 2;
                    else if((i == 2 || i == 7) || (j == 2 || j == 7)) score += 3;
                    else if((i == 3 || i == 6) || (j == 3 || j == 6)) score += 4;
                    else if((i == 4 || i == 5) || (j == 4 || j == 5)) score += 5;
                }
            }
        }
        cout << score << "\n";
    }
}

int main()
{
    accepted();
    return 0;
}