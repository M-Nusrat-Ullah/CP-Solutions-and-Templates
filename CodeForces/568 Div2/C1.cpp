#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nt;
    scanf("%d %d",&t,&y);
    int wq[t+3],ans[t+3],re[t+3]={0};
    for(g=0,h=1;g<t;g++){
        scanf("%d",&wq[g]);
        re[h]+=wq[g]+re[h-1];
    }
    for(g=t;g>0;g--){
        vector<int>cp(wq,wq+t);
        sort(cp.begin(),cp.end()-1);
        for(h=g-2,nt=0;h>=0;h--){
            if(re[g]<=y)break;
            re[g]-=cp[h], nt++;
        }
        ans[g-1]=nt;
    }
    for(g=0;g<t;g++)printf("%d ",ans[g]);
    printf("%d\n",ans[g]);
    return 0;
}
