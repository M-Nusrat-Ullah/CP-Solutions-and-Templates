#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,re=1;
    scanf("%d",&t);
    for(g=2;g<=(t/2);g++){
        x=t-g;
        if(x%g==0)re++;
    }
    printf("%d\n",re);
    return 0;
}
