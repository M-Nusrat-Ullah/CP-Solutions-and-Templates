#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,q,t,w,nt,nt1;
    bool k=false;
    scanf("%d %d %d",&q,&t,&w);
    int wq[t+3],re[q+7]={0};
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    sort(wq,wq+t);
    for(g=nt=nt1=0;g<t&&!k;g++){
        nt+=w;
        nt1++;
        for(h=min(nt,q);h<nt+wq[g]&&h<=q;h++)
            re[h]=nt1;
        nt+=(wq[g]-1);
        if(nt>q)k=true;
    }
    if(nt+w>q)k=true;
    if(k){
        printf("YES\n");
        for(g=1;g<=q;g++)
            printf("%d ",re[g]);
    }
    else printf("NO\n");
    return 0;
}
