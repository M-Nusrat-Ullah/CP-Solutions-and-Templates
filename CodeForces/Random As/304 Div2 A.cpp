#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,r,re=0;
    scanf("%d %d %d",&t,&y,&r);
    for(g=1;g<=r;g++)
        re+=(t*g);
    printf("%d\n",re-y>=0?re-y:0);
    return 0;
}
