#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nt,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int wq[y+3];
        for(g=nt=0;g<y;g++)
            scanf("%d",&wq[g]);
        z=y-1;
        for(g=1;g<=y&&z;g++){
            for(h=0;h<y;h++)
                if(wq[h]==g)break;
            if(g==h+1)nt++;
            while(h>0&&wq[h-1]>wq[h]&&nt<y-1)
                nt++,swap(wq[h],wq[h-1]),h--;
        }
        for(g=0;g<y-1;g++)
            printf("%d ",wq[g]);
        printf("%d\n",wq[g]);
    }
    return 0;
}
