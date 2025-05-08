#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,nt=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    sort(wq,wq+t);
    for(g=0;g<t;g++){
        if(!wq[g])continue;
        for(h=g+1;h<t;h++)
            if(wq[h]%wq[g]==0)wq[h]=0;
        wq[g]=0;
        nt++;
    }
    printf("%d\n",nt);
    return 0;
}
