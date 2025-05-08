#include<cstdio>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
int main()
{
    int g,h,t;
    ll x,n=0,p=0;
    scanf("%d",&t);
    int wq[t+3];
    for(g=0;g<t;g++)
        scanf("%d",&wq[g]);
    for(g=0;g<t;g++){
        x=1;
        for(h=g;h<t;h++){
            x*=wq[h];
            x%=1000000007;
            if(x>0)p++;
            else n++;
        }
    }
    printf("%I64d %I64d\n",n,p);
    return 0;
}
