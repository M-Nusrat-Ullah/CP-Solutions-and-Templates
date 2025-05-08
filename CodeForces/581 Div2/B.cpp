#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,l,h,lre=0,hre=0;
    scanf("%d %d %d",&t,&l,&h);
    y=t;
    while(l--){
        if(!l)lre+=(1*y);
        else lre+=(1<<l);
        y--;
    }
    l=0;
    while(l!=h){
        if(l+1==h)hre+=((1<<l)*t);
        else hre+=(1<<l);
        l++, t--;
    }
    printf("%d %d\n",lre,hre);
    return 0;
}
