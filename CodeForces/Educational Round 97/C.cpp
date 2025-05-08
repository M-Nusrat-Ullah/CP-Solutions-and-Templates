#include<bits/stdc++.h>
using namespace std;
int t,y,wq[203],st[203][403],kk1[203][403],kk[403];
int dmc(int g,int nm)
{
    if(g==y||nm==2*y)return 0;
    if(st[g][nm]!=1e9)return st[g][nm];
    st[g][nm]=dmc(g+1,nm);
    st[g][nm]=min(st[g][nm],dmc(g+1,abs(wq[g]-nm)));
    st[g][nm]=min(st[g][nm],dmc(g,nm+1));
    return st[g][nm];
}
int main()
{
    int g,h;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++)
            scanf("%d",&wq[g]);
        sort(wq,wq+y);
        for(g=0;g<=y;g++)
            for(h=0;h<=2*y;h++)
                kk[h]=0,st[g][h]=1e9;
        printf("%d\n",dmc(0,1));

        for(g=0;g<y;g++)
            printf("%d ",wq[g]);
        printf("\n");
    }
    return 0;
}
