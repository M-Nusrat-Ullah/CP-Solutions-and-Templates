#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int g,q,w,re=0,wq[103];
    scanf("%d %d",&q,&w);
    for(g=0;g<q;g++)
        scanf("%d",&wq[g]);
    for(g=0;g<q;g++)
        re+=(max(wq[g]-w*3,wq[g]%w));
    printf("%d\n",re);
    return 0;
}
