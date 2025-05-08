#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,ntm,ntp,ntz,mini,maxa;
    scanf("%d",&t);
    int wq[t+3];
    for(g=ntm=ntp=ntz=0,maxa=-1e9;g<t;g++){
        scanf("%d",&wq[g]);
        if(wq[g]<0)ntm++;
        else if(wq[g]>0)ntp++;
        else ntz++;
        if(wq[g]>maxa)maxa=wq[g];
    }
    if(ntm&1){
        for(g=0,mini=1e9;g<t;g++)
            if(wq[g]<mini&&wq[g]!=-1)mini=wq[g],h=g;
        wq[h]= -wq[h]-1;
        if(ntz&1)for(g=0;g<t;g++)if(wq[g]==0)wq[g]--;
    }
    if(ntm%2==0&&ntz%2==0)
        for(g=0;g<t;g++)if(wq[g]==0)wq[g]--;
    if(ntp&1){
        for(g=0,mini=1e9;g<t;g++)
            if(wq[g]<mini&&wq[g]>0)mini=wq[g],h=g;
        for(g=0;g<t;g++)
            if(wq[g]>=mini&&h!=g)wq[g]= -wq[g]-1;
    }
    else if(ntp%2==0){
        for(g=0;g<t;g++)
            if(wq[g]>0)wq[g]= -wq[g]-1;
    }
    if(maxa==0&&t==1)
}
