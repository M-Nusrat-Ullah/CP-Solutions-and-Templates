#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,re=0;
    scanf("%d %d",&t,&q);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<t;g++)if(wq[g])
        for(h=g+1;h<t;h++)if(wq[h])
            if(!((wq[g]+wq[h])%q)){
                re++;
                wq[g]=wq[h]=0;
                break;
    }
    printf("%d\n",re*2);
    return 0;
}
