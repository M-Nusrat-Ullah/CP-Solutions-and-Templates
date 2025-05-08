#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,q,w,z,x,m;
    bool k=false;
    scanf("%d %d",&q,&w);
    for(g=q;g<=w&&!k;g++){
        z=g, m=0;
        while(z){
            x=z%10;
            if(m&(1<<x))break;
            z/=10;
            m|=(1<<x);
        }
        if(!z)k=true;
    }
    if(k)printf("%d\n",g-1);
    else printf("-1\n");
    return 0;
}
