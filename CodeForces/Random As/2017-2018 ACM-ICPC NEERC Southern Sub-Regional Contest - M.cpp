#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,z,x,re;
    scanf("%d %d %d %d",&q,&w,&z,&x);
    re=abs(q-z)+abs(w-x)+2;
    if(q==z||w==x)re++;
    printf("%d\n",re*2);
    return 0;
}
