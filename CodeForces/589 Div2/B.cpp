#include<bits/stdc++.h>
using namespace std;
int bigmod(int z,int x)
{
    int bg;
    if(!x)return 1;
    else if(x==1)return z;
    bg=bigmod(z,x>>1);
    bg*=bg;
    bg%=1000000007;
    if(x&1)bg*=z;
    return bg%1000000007;
}
int main()
{
    int g,h,t,y,nt=0,re;
    scanf("%d %d",&t,&y);
    int wq[t+3],ew[y+3];
    for(g=0;g<t;g++) scanf("%d",&wq[g]);
    for(g=0;g<y;g++) scanf("%d",&ew[g]);
    for(g=1,nt=0;g<t;g++)
        for(h=1;h<y;h++)
            if(wq[g]<h&&ew[h]<g)nt++;
//    for(g=0;g<nt;g++){
//        re<<=1;
//        re%=1000000007;
//    }
    if(nt)re=bigmod(2,nt);
    else re=0;
    printf("%d\n",re);
    return 0;
}
