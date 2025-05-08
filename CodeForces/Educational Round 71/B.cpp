#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,j,t,y,nt,rnt=0,x[2503],z[2503];
    scanf("%d %d",&t,&y);
    int wq[t+3][y+3],re[t+3][y+3]={0};
    for(g=1;g<=t;g++)
        for(h=1;h<=y;h++)
            scanf("%d",&wq[g][h]);
    for(g=1;g<t;g++)
        for(j=1;j<y;j++)if(wq[g][j]){
            for(h=g,nt=0;h<g+2&&h<=t;h++)
                for(f=j;f<j+2&&f<=y;f++)if(wq[h][f])
                    nt++;
            if(nt==4)for(h=g,x[rnt]=g,z[rnt]=j,rnt++;h<g+2&&h<=t;h++)
                for(f=j;f<j+2&&f<=y;f++)
                    re[h][f]=1;
    }
    for(g=1;g<=t;g++)
        for(h=1;h<=y;h++)if(wq[g][h]!=re[g][h])
            rnt=-1;
    if(rnt==-1)printf("-1\n");
    else{
        printf("%d\n",rnt);
        if(rnt){for(g=0;g<rnt-1;g++)printf("%d %d\n",x[g],z[g]);
                printf("%d %d\n",x[g],z[g]);}
    }
    return 0;
}
