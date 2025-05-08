#include<bits/stdc++.h>
using namespace std;
set<int>ss;
int main()
{
    int re,g,t,y,q,x,xx;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&y,&q);
        xx=-1e9;
        for(g=0;g<y;g++){
            scanf("%d",&x);
            xx=max(xx,x);
            ss.insert(x);
        }
        re=ss.size();
        for(g=0;g+1<xx;g++)if(ss.find(g)==ss.end()){
            x=(xx+g+1)>>1;
            if(q&&ss.find(x)==ss.end())re++;
            q=0;
            break;
        }
        if(q)re+=q;
        if(xx==1&&ss.size()==1)re=1;
        printf("%d\n",re);
        ss.clear();
    }
    return 0;
}
