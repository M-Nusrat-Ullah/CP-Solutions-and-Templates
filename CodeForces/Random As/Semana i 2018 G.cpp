#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll x,ll y)
{
    return (x*y)/__gcd(x,y);
}
int main()
{
    ll t,a,b,c,d,e,f;
    ll up,lm,gcd;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld/%lld %lld/%lld %lld/%lld",&a,&b,&c,&d,&e,&f);
        lm=lcm(b,lcm(d,f));
        up=(lm/b)*a+(lm/d)*c+(lm/f)*e;
        gcd=__gcd(lm,up);
        printf("%d/%d\n",(int)(up/gcd),(int)(lm/gcd));
    }
    return 0;
}
