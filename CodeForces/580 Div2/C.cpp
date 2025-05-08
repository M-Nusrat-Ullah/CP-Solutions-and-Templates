#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t;
    scanf("%d",&t);
    if(t&1){
        printf("YES\n");
        printf("1");
        for(g=t+1;g<2*t;g++)printf(" %d",g);
        for(g=2;g<=t;g++)printf(" %d",g);
        printf(" %d\n",2*t);
    }
    else printf("NO\n");
    return 0;
}
