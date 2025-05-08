#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
int main()
{
    int g,h,t,q,w,e,n,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        h=q, n=e, g=q-w;
        if(g<0)
            if(e>=g)q+=abs(g), e-=abs(g);
            else q+=e, e=0;
        else{
            if(e>=g)w+=g, e-=g;
            else w+=e, e=0;
        }
        if(e>0){
            e/=2;
            if(e&1) w+=e, q+=(e+1);
            else w+=(e-1), q+=(e+1);
        }
        re=(h+n)-q;
        printf("%d\n",re>0||!n?re+1:0);
    }
    return 0;
}
