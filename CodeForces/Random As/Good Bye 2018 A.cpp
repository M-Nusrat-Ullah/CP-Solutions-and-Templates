#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,q,w,e,re;
    scanf("%d %d %d",&q,&w,&e);
    for(g=1;g<=q&&g+1<=w&&g+2<=e;g++)
        re=3*g+3;
    printf("%d\n",re);
    return 0;
}
