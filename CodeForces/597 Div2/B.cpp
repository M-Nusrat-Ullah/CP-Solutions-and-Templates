#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,r,p,s,re,br,bp,bs,z,x,c;
    string q;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&y,&r,&p,&s);
        cin>>q;
        br=bp=bs=0;
        for(g=0;q[g];g++)
            if(q[g]=='R')br++;
            else if(q[g]=='P')bp++;
            else bs++;
        re=min(br,p)+min(bp,s)+min(bs,r);
        x=(y+2-1)/2;
        if(re<x)
            printf("NO\n");
        else{
            printf("YES\n");
            z=r-bs, x=s-bp, c=p-br;
            for(g=0;q[g];g++){
                if(q[g]=='R'&&p)printf("P",p--);
                else if(q[g]=='P'&&s)printf("S",s--);
                else if(q[g]=='S'&&r)printf("R",r--);
                else if(z>0)printf("R",z--);
                else if(x>0)printf("S",x--);
                else if(c>0)printf("P",c--);
            }
            printf("\n");
        }
    }
    return 0;
}
