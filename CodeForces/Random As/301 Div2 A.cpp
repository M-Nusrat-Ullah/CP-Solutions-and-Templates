#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,z,re=0;
    scanf("%d",&t);
    int p[t+3],l[t+3];
    for(g=0;g<t;g++)
        scanf("%1d",&p[g]);
    for(g=0;g<t;g++)
        scanf("%1d",&l[g]);
    for(g=0;g<t;g++){
        z=abs(p[g]-l[g]);
        if(z>4)re+=10-z;
        else re+=z;
    }
    printf("%d\n",re);
    return 0;
}
