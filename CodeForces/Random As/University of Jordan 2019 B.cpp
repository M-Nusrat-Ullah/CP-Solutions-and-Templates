#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bitset<10000011>re;
vector<int>udd;
void eos(int z)
{
    ll g,h,f;
    int x=z+1;
    re.set();
    re[0]=re[1]=0;
    for(g=2;g<3;g++){
        for(h=2*2;h<=x;h+=2)re[h]=0;
        udd.push_back(g);
    }
    for(;g<=x;g+=2)if(re[g]){
        for(h=g*g,f=2*g;h<=x;h+=f)re[h]=0;
        udd.push_back(g);
    }
    return;
}
int main()
{
    eos(1e7);
    int t,lo,m,hi;
    bool k=false;
    scanf("%d",&t);
    lo=1, hi=udd.size();
    while(lo<=hi){
        m=(lo+hi)>>1;
        if(2+udd[m]==t){k=true;break;}
        else if(2+udd[m]>t)hi=m-1;
        else lo=m+1;
    }
    if(k)printf("2 %d\n",udd[m]);
    else printf("-1\n");
    return 0;
}
