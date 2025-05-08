#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
int main()
{
    int g;
    bool k=false;
    string q;
    cin>>q;
    cout<<q.length()<<endl;
    for(g=1;q[g];g++)if(q[g]=='1'){k=true;break;}
    if(k)printf("%d\n",(q.length()+1)/2);
    else printf("%d\n",q.length()/2);
    return 0;
}
