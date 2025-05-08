#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,r,z,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&q,&w,&e,&r);
        x=min(q,r/e);
        z=e*x+w;
        if(z>=r)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
