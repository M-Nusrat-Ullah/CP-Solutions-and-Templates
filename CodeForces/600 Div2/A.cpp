#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,nt,dnt,x,z,wq[100003],ew[100003],st[100003];
    bool k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++)
            scanf("%d",&wq[g]);
        for(g=0;g<y;g++)
            scanf("%d",&ew[g]);
        for(g=k=0;g<y;g++)
            st[g]=ew[g]-wq[g];
        if(y==1&&st[0])k=true;
        for(g=nt=dnt=0;g<y&&!k;g++){
            if(st[g]&&!nt)nt++,x=st[g],z=g;
            if(nt==1&&st[g]==x)
                if(g-z>1)k=true;
                else dnt++,z=g;
            else if(nt==1&&st[g])k=true;
        }
        if(k)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
