#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x;
    bool k=false;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        if(!k&&x==1)k=true;
    }
    if(k)printf("-1\n");
    else printf("1\n");
    return 0;
}
