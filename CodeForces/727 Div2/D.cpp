#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> lll;
vector<ii>wq;
int main()
{
    int g,t;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d %d",&z,&x);
        wq.push_back(lll(x,z));
    }
    sort(wq.begin(),wq.end());
    for(g=0,h=t-1;;){
        nn=min(wq[g].first,wq[h].second);
    }
}
