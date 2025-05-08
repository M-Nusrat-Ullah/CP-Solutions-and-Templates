#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w,x,c,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        x=w/q;
        c=w%q;
        re=(((x+1)*(x+1))*c)+((x*x)*(q-c));
        printf("%d\n",re);
    }
    return 0;
}
