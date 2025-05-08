#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,w,e,re=0;
    long long z,x;
    map<int,int>wq;
    scanf("%d %d %d",&t,&w,&e);
    while(t--){
        scanf("%I64d",&z);
        x=((z*z%w*z%w*z%w)-(e*z%w+w))%w;
        re+=wq[x];
        wq[x]++;
    }
    printf("%d\n",re);
    return 0;
}
