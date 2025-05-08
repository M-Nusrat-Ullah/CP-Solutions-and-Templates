#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cup,med,re,q,w,e,z,x,c,t;
    scanf("%d %d %d %d %d %d %d",&q,&w,&e,&z,&x,&c,&t);
    cup=q+w+e;
    med=z+x+c;
    if(cup%5)re=cup/5+1;
    else re=cup/5;
    if(med%10)re+=med/10+1;
    else re+=med/10;
    if(re<=t)printf("YES\n");
    else printf("NO\n");
    return 0;
}
