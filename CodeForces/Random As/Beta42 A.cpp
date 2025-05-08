#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>k;
    int t,maxa=1e-9;
    string q,re;
    scanf("%d",&t);
    while(t--){
        cin>>q;
        k[q]++;
    }
    for(auto g=k.begin();g!=k.end();g++)
        if(g->second>maxa)
            maxa=g->second, re=g->first;
    cout<<re<<endl;
    return 0;
}
