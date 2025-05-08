#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int g,h,t,y,r;
    bool k;
    ll s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&y,&r);
        int wq[y+3],re[r+3];
        for(g=s=k=0;g<y;g++){
            scanf("%d",&wq[g]);
            s+=wq[g];
        }
        if((s&1)!=(r&1))k=true;
        if(!k){
            for(g=h=0;g<y-1;g++)
                if(h<r-1&&wq[g]&1)re[h++]=g;
            re[h++]=y;
        }
        if(h!=r&&!k)k=true;
        if(k)printf("NO\n");
        else{
            printf("YES\n");
            for(g=0;g<h-1;g++)printf("%d ",re[g]+1);
            printf("%d\n",re[g]);
        }
    }
    return 0;
}
