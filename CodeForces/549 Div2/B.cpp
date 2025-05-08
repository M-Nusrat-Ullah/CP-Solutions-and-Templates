#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll g,t,tmp,mod,mul,ma=-11,z;
    scanf("%lld",&t);
    for(g=0,z=t;g<2000&&z>=1;g++,z--){
        tmp=z;
        mul=1;
        while(tmp){
            mod=tmp%10;
            tmp/=10;
            mul*=mod;
        }
        ma=max(mul,ma);
    }
    printf("%lld\n",ma);
    return 0;
}
