#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
//    freopen("B in.txt","r",stdin);
    int g,h,t,re;
    bool k=false;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    sort(wq,wq+t);
    for(g=t-2,re=wq[t-1];g>=0;){
        while(wq[g]&&wq[h])
            wq[g]--,wq[h]--;
        if(!wq[g])g--;
        if(!wq[h])h=g,g--;
    }
    for(g=0;g<t;g++)if(wq[g]){k=true;break;}
    if(k)printf("NO\n");
    else printf("YES\n");
    return 0;
}
