#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,x,x1,z,re1,re2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&q,&w,&e);
        x=min(w/2,q);
        x1=w-2*x;
        z=min(e/2,x1);
        re1=x+2*x+z+2*z;
        x=min(e/2,w);
        x1=w-x;
        z=min(x1/2,q);
        re2=x+2*x+z+2*z;
        printf("%d\n",max(re1,re2));
    }
    return 0;
}
