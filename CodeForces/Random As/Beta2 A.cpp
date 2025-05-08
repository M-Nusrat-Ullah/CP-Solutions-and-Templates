#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>wq,k;
    string q[1003],re;
    int g,t,maxa=0;
    scanf("%d",&t);
    int z[t+3];
    for(g=0;g<t;g++){
        cin>>q[g]>>z[g];
        wq[q[g]]+=z[g];
    }
    for(auto h=wq.begin();h!=wq.end();h++)
        if(h->second>maxa){
            maxa=h->second;
    }
    for(g=0;g<t;g++){
        k[q[g]]+=z[g];
        if(k[q[g]]>=maxa&&wq[q[g]]==maxa){
            re=q[g];
            break;
        }
    }
    cout<<re<<endl;
    return 0;
}
