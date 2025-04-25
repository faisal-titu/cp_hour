// author: faisal ahammed
// date: 21:07:17 27-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int king_pos_x, king_pos_y;
        cin >> king_pos_x >> king_pos_y;

        int queen_pos_x, queen_pos_y;
        cin >> queen_pos_x >> queen_pos_y;

        set<pair<int, int>> moves;

        moves.insert({a, b});
        moves.insert({-a, b});
        moves.insert({a, -b});
        moves.insert({-a, -b});
        moves.insert({b, a});
        moves.insert({-b, a});
        moves.insert({b, -a});
        moves.insert({-b, -a});

        set<pair<int, int>> attacking_king;

        for(auto move:moves)
            attacking_king.insert({king_pos_x + move.first, king_pos_y + move.second});
        
        set<pair<int, int>> attacking_queen;

        for(auto move:moves)
            attacking_queen.insert({queen_pos_x + move.first, queen_pos_y + move.second});

        int ans = 0;
        for(auto move:attacking_king)
        {
            if(attacking_queen.find(move) != attacking_queen.end())
                ans++;
        }

        cout << ans << "\n";

    }
}

int main()
{
    accepted();
    return 0;
}