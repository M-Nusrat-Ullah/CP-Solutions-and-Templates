#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,z,x,a,re1,re2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&q,&w,&z,&x,&a);
        re1=(q+z-1)/z;
        re2=(w+x-1)/x;
        if(re1+re2>a)printf("-1\n");
        else printf("%d %d\n",re1,re2);
    }
    return 0;
}
