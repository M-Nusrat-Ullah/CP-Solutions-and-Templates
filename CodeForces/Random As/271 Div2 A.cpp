#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h;
    bool ck=false;
    string q,w,re,k="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>q>>w;
    if(q=="R")
        for(g=0;w[g];g++){
            for(h=0;k[h];h++)
                if(w[g]==k[h]){
                    re+=k[h-1];
                    break;
        }
    }
    else for(g=0;w[g];g++){
            for(h=0;k[h];h++)
                if(w[g]==k[h]){
                    re+=k[h+1];
                    break;
        }
    }
    cout<<re<<endl;
    return 0;
}
