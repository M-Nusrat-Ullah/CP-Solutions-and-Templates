#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,q,w;
    ll y,re,wq;
    scanf("%d",&t);
    while(t--){
        cin>>y>>q>>w;
        re=0;
        wq=0;
        if(y%2)re+=(((y/2)*w)+q);
        else re+=((y/2)*w);
        wq+=(y*q);
        if(re<=wq)cout<<re<<endl;
        else cout<<wq<<endl;
    }
    return 0;
}
