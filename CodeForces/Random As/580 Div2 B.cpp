#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,n=0,z=0;
    long long nt=0;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        if(x>0)nt+=(x-1);
        else if(x<0)n++, nt+=(abs(x)-1);
        else z++, nt++;
    }
    if(n&1&&!z)nt+=2;
    printf("%I64d\n",nt);
    return 0;
}
