#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,re[107]={0};
    re[1]=1;
    for(g=2,h=4;g<=100;g++,h+=4)
        re[g]+=re[g-1]+h;
    scanf("%d",&t);
    printf("%d\n",re[t]);
    return 0;
}
