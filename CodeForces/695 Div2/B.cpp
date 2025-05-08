#include<bits/stdc++.h>
using namespace std;
int wq[300003],kk[300003];
int main()
{
    int g,t,y,re,nt,nt1,nt2,nn,xx;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=nt=0;g<y;g++){
            scanf("%d",&wq[g]);
            kk[g]=0;
        }
        for(g=1;g+1<y;g++){
            if(wq[g]>wq[g-1]&&wq[g]>wq[g+1]||wq[g]<wq[g-1]&&wq[g]<wq[g+1])
                kk[g]=++nt;
        }
        re=nt;
        for(g=1;g+1<y;g++)if(kk[g]){
            nt1=nt2=1;
            nn=min(wq[g-1],wq[g+1]);
            xx=max(wq[g-1],wq[g+1]);
            if(kk[g-1]&&wq[g]>wq[g-1]&&wq[g]>wq[g+1]&&wq[g-1]>=nn)
                nt1++;
            if(kk[g+1]&&wq[g]>wq[g-1]&&wq[g]>wq[g+1]&&wq[g+1]>=nn)
                nt1++;
            if(kk[g-1]&&wq[g]<wq[g-1]&&wq[g]<wq[g+1]&&wq[g-1]<=xx)
                nt2++;
            if(kk[g+1]&&wq[g]<wq[g-1]&&wq[g]<wq[g+1]&&wq[g+1]<=xx)
                nt2++;
            re=min(re,min(nt-nt1,nt-nt2));
        }
        printf("%d\n",re);
    }
    return 0;
}
