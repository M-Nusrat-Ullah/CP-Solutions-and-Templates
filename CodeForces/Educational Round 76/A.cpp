#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,e,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&q,&w,&e,&r);
        printf("%d\n",min(abs(e-r)+w,q-1));
    }
    return 0;
}
