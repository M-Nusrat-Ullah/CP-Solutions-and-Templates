#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,wq[7],re1,re2;
    bool k=false;
    for(g=0;g<4;g++)scanf("%d",&wq[g]);
    for(g=0;g<(1<<4);g++){
        for(h=re1=re2=0;h<4;h++)
            if(g&(1<<h))re1+=wq[h];
            else re2+=wq[h];
        if(re1==re2)k=true;
    }
    if(k)printf("YES\n");
    else printf("NO\n");
    return 0;
}
