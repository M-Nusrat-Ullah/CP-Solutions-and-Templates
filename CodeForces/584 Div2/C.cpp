#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
vi dis;
vvii st;
bool bellman_ford(int y)
{
    int g,h,f;
    bool k=true;
    ii z;
    dis[0]=0;
    for(g=0;g<y-1;g++)
        for(h=0;h<y;h++)
            for(f=0;f<st[h].size();f++){
                z=st[h][f];
                dis[z.first]=min(dis[z.first],dis[h]+z.second);
    }
    for(g=0;g<y&&k;g++)
        for(h=0;h<st[g].size()&&k;h++){
            z=st[g][h];
            if(dis[z.first]>dis[g]+z.second)
                k=false;
    }
    return k;
}
int main()
{
    int t,y,r,q,w,e;
    bool re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&y,&r);
        st.resize(y);
        dis.assign(y,1e9);
        while(r--){
            scanf("%d %d %d",&q,&w,&e);
            st[q].push_back(ii(w,e));
        }
        re=bellman_ford(y);
        if(re)printf("not possible\n");
        else printf("possible\n");
        st.clear();
    }
    return 0;
}
