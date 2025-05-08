#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,mi,mx,sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        mi=min(q,w);
        if(e>=mi)printf("%d\n",mi);
        else{
            mi-=e, mx=max(q,w)-e;
            mi=min(mi,mx);
            mx=min(2*mi,max(mi,mx));
            printf("%d\n",e+(mi+mx)/3);
        }
    }
    return 0;
}
