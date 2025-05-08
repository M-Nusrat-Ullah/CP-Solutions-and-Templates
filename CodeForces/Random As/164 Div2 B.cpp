#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,re=0;
    scanf("%d",&t);
    for(g=t-1,h=1;g>0;g--,h++)
        re+=(h*g);
    printf("%d\n",re+t);
    return 0;
}
