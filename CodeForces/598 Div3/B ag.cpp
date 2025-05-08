#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f,t,y,nt,z,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int wq[y+3];
        for(g=nt=0;g<y;g++)
            scanf("%d",&wq[g]);
        for(g=1,f=0,z=y-1;g<=y&&z;g++){
            for(h=0;h<y;h++)
                if(wq[h]==g)break;
            x=min(h-f,z);
            while(h>0&&wq[h-1]>wq[h]&&nt<y-1)
                nt++,swap(wq[h],wq[h-1]),h--;
        }
        for(g=0;g<y-1;g++)
            printf("%d ",wq[g]);
        printf("%d\n",wq[g]);
    }
    return 0;
}
