#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
int main()
{
    int g,h,t,q,w,e,nt;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        for(g=nt=0,h=e;h>=0;g++,h--){
            if(q+h>w+g)nt++;
            else break;
        }
        printf("%d\n",nt);
    }
    return 0;
}
