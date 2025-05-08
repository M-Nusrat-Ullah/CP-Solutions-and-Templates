#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,w,t,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        re=0;
        q=abs(q-w);
        re+=q/5;
        q%=5;
        re+=q/2;
        q%=2;
        re+=q/1;
        printf("%d\n",re);
    }
    return 0;
}
