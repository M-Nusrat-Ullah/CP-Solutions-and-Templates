#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
using namespace std;
int main()
{
 //   freopen("B in.txt","r",stdin);
    int g,t,re;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    sort(wq,wq+t);
    for(g=t-2,re=wq[t-1];g>=0;g--)
        re=max(re,wq[g])-min(re,wq[g]);
    if(re)printf("NO\n");
    else printf("YES\n");
    return 0;
}
