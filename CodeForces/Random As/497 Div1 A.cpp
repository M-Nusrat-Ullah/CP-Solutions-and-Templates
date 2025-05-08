#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,t,z,maxa=1e-9;
    map<int,int>k;
    scanf("%d",&t);
    for(h=0;h<t;h++){
        scanf("%d",&z);
        k[z]++;
    }
    for(auto g=k.begin();g!=k.end();g++)
        if(g->second>maxa)maxa=g->second;
    printf("%d\n",t-maxa);
    return 0;
}
