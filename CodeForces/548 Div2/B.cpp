#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int g,t,ck,re=0,nt=0,mi;
    scanf("%lld",&t);
    int wq[t+3];
    for(g=0;g<t;g++)scanf("%lld",&wq[g]);
    re+=wq[t-1];
    mi=wq[t-1];
    for(g=t-2;g>=0&&mi>0;g--)
        if(wq[g]>=mi){
            re+=(mi-1);
            mi=mi-1;
        }
        else{
            re+=wq[g];
            mi=wq[g];
        }
    printf("%lld\n",re);
    return 0;
}
