#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<1000011>re;
vector<ll>udd;
void eos(int z)
{
    ll g,h,f;
    int x=z+1;
    re.set();
    re[0]=re[1]=0;
    for(g=2;g<3;g++){
        for(h=2*2;h<=x;h+=2)re[h]=0;
        udd.push_back(g*g);
    }
    for(;g<=x;g+=2)if(re[g]){
        for(h=g*g,f=2*g;h<=x;h+=f)re[h]=0;
        udd.push_back(g*g);
    }
    return;
}
int main()
{
    eos(1e6);
    int t,lo,m,hi;
    bool k;
    ll z;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&z);
        lo=k=0, hi=udd.size()-1;
        while(lo<=hi){
            m=(lo+hi)>>1;
            if(udd[m]==z){k=true;break;}
            else if(udd[m]>z)hi=m-1;
            else lo=m+1;
        }
        if(k)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
