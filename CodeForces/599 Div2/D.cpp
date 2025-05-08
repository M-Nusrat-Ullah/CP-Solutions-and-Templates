#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    long long g,q;
    bool k;
    scanf("%I64d",&q);
    for(k=0,g=2;g*g<=q&&!k;g++)if(q%g==0)
        x=g,k=true;
    if(!k)printf("%I64d\n",q);
    else{
        while(q%x==0)
            q/=x;
        if(q==1)printf("%d\n",x);
        else printf("1\n");
    }
    return 0;
}
