/*
    Logic :
    We can always get sum of 2^0 to 2^n in 2^(n+1).
    And we can always get sum of 3^0 to 3^n in (3^(n+1))/2.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1000000007;
int bigmod(int x,int z)
{
    if(!z)return 1;
    if(z==1)return x;
    ll bg=bigmod(x,z>>1);
    bg*=bg;
    bg%=M;
    if(z&1)bg*=x;
    return bg%M;
}
int main()
{
    int t,q,w,e,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&q,&w,&e,&r);
        int hi=bigmod(2,w+1), lo=bigmod(2,q);
        ll re1=hi-lo;
        if(re1<0)re1+=M;
        hi=bigmod(3,r+1), lo=bigmod(3,e);
        ll re2=hi-lo;
        if(re2<0)re2+=M;
        ll re=(re1*re2)%M;
        if(re&1)re+=M;
        re/=2; re%=M;
        printf("%d\n",(int)re);
    }
    return 0;
}
