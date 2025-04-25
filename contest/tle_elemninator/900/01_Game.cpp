// author: faisal ahammed
// date: 20:38:08 10-03-2025

#include <bits/stdc++.h>
using namespace std;

void accepted()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int one =0, zero =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') zero++;
            else one++;
        }
        if(zero==one){
            if(zero%2==0){
                cout<<"NET"<<endl;
            }else{
                cout<<"DA"<<endl;
            }
        }else{

        int mins = min(zero,one);

        if(mins%2==0){
            cout<<"NET"<<endl;
        }else{
            cout<<"DA"<<endl;
        }
        }

    }
}

int main()
{
    accepted();
    return 0;
}