#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h;
    bool ck;
    string q,k="AEIOUYaeiouy";
    cin>>q;
    for(g=0;q[g];g++){
        ck=true;
        for(h=0;k[h]&&ck;h++)
            if(q[g]==k[h])ck=false;
        if(ck)printf(".%c",tolower(q[g]));
    }
    printf("\n");
    return 0;
}
