#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll st[100003];
int main()
{
    int g,h,t,q,w,x;
    ll ss;
    vector<ll>st1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        for(g=0;g<w;g++)st[g]=1;
        ss=w, x=q>>1;
        for(g=1;g*g<=x;g++)if(x%g==0){
            st1.push_back(g);
            if(g*g!=x)st1.push_back(x/g);
        }
        sort(st1.begin(),st1.end());
        for(g=0,h=st1.size()-1;ss<q&&g<w&&h>=0;){
            if(ss+st1[h]-1<=q)st[g]=st1[h], ss+=(st1[h]-1), g++;
            else h--;
        }
        for(g=0;g<w;g++)printf("%d ",st[g]);
        printf("\n");
        st1.clear();
    }
    return 0;
}
