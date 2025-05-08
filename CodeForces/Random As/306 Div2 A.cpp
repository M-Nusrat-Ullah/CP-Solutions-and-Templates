#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,z=0,x=0;
    bool k=false;
    string q;
    cin>>q;
    for(g=1,h=q.size();q[g]&&!k;g++){
        if(q[g]=='B'&&q[g-1]=='A')z=g-1;
        if(q[h-g]=='A'&&q[h-g-1]=='B')x=h-g-1;
        if(abs(z-x)>1)k=true;
        z=x=0;
    }
    if(k)printf("YES\n");
    else printf("NO\n");
    return 0;
}
