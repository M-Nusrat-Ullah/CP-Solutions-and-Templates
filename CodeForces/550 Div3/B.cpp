#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,t,ev=0,od=0,mi,del,re=0,i;
    scanf("%d",&t);
    int wq[t+3],e[t+3],o[t+3];
    for(g=h=f=0;g<t;g++){
        scanf("%d",&wq[g]);
        if(wq[g]&1){od++;o[h++]=wq[g];}
        else{ev++;e[f++]=wq[g];}
    }
    mi=min(od,ev);
    sort(o,o+h);
    sort(e,e+f);
    del=(mi*2)+1;
    del=t-del;
    if(del<=0)re=0;
    else
        if(od>ev)
            for(i=0;i<del;i++)re+=o[i];
        else
            for(i=0;i<del;i++)re+=e[i];
    printf("%d\n",re);
    return 0;
}
