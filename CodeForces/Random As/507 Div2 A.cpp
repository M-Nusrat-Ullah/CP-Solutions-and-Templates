#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,q,w,re=0;
    bool k=true;
    scanf("%d %d %d",&t,&q,&w);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=0;g<(t>>1);g++){
        if(wq[g]==2&&wq[g]==wq[t-g-1])re+=2*min(q,w);
        else if(wq[g]==1&&wq[t-g-1]==2||wq[g]==2&&wq[t-g-1]==1)re+=w;
        else if(wq[g]==0&&wq[t-g-1]==2||wq[g]==2&&wq[t-g-1]==0)re+=q;
        else if(wq[g]==0&&wq[t-g-1]==0||wq[g]==1&&wq[t-g-1]==1)continue;
        else{k=false; break;}
    }
    if(k&&(t&1)&&wq[t>>1]==2)re+=min(q,w);
    if(k)printf("%d\n",re);
    else printf("-1\n");
    return 0;
}
