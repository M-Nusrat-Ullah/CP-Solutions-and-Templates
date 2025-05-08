#include<bits/stdc++.h>
using namespace std;
int wq[203],st[203][403];
int main()
{
    int g,h,t,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++)
            scanf("%d",&wq[g]);
        sort(wq,wq+y);
        for(g=0;g<=y+1;g++)for(h=0;h<=2*y;h++)
            st[g][h]=1e9;
        st[0][1]=0;
        for(g=0;g<=y;g++){
            for(h=1;h<2*y;h++){
                if(st[g][h]<1e9){
                    if(g<y)st[g+1][h+1]=min(st[g+1][h+1],st[g][h]+abs(wq[g]-h));
                    st[g][h+1]=min(st[g][h+1],st[g][h]);
                }
            }
        }
        printf("%d\n",st[y][2*y]);
    }
    return 0;
}
