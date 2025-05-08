#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,mi=1e9+50;
    long long re=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%d",&wq[g]);
    for(g=t-1;g>=0;g--){
        mi=max(0,min(mi-1,wq[g]));
        re+=mi;
    }
    printf("%lld\n",re);
    return 0;
}
