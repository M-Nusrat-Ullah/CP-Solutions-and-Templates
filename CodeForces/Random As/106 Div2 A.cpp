#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,m[13],add=0;
    scanf("%d",&t);
    for(g=0;g<12;g++)scanf("%d",&m[g]);
    sort(m,m+12);
    for(g=11;g>=0;g--){
        add+=m[g];
        if(add>=t)break;
    }
    if(add<t)printf("-1\n");
    else printf("%d\n",t?12-g:0);
    return 0;
}
