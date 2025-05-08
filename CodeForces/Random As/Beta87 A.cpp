#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,re=0,maxa=1e-9;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        re-=q;
        re+=w;
        maxa=max(maxa,re);
    }
    printf("%d\n",maxa);
    return 0;
}
