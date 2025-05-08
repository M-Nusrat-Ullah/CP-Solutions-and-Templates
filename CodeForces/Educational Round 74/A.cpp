#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<100000010>re;
vector<ll>udd;
void eos(ll z)
{
    int g,h,x;
    ll l=z+1;
    re.set();
    re[0]=re[1]=0;
    for(g=2;g<3;g++){
        for(h=g*g;h<=l;h+=2)re[h]=0;
        udd.push_back(g);
    }
    for(;g<=l;g+=2)if(re[g]){
        for(h=g*g,x=2*g;h<=l;h+=x)re[h]=0;
        udd.push_back(g);
    }
}
int main()
{
    eos(1e8);
    int g,t,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        for(g=0;g<udd.size())
    }
}
