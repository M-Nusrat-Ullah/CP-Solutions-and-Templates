#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,t,y,nt,sum;
    bool k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int wq[y+3],re[15];
        for(g=0;g<y;g++)scanf("%d",&wq[g]);
        for(h=2048,f=0;h>0;h>>=1,f++){
            for(g=nt=0;g<y;g++)
                if(h==wq[g])nt++;
            re[f]=nt;
        }
        for(g=k=sum=0,h=2048;g<f;g++,h>>=1){
            sum+=(h*re[g]);
            if(sum>=2048){k=true; break;}
        }
        if(k)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
