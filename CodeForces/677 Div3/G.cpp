#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int s;
vi dis,pr,nt;
vvii st;
priority_queue<ii,vii,greater<ii>>qq;
void path(int x)
{
    if(x==s){
        nt[s]++;
        printf("%d ",x);
        return;
    }
    path(pr[x]);
    printf("%d ",x);
    nt[x]++;
}
int main()
{
    int g,h,t,y,q,z,x,w,e,ps,xx=-1e9,re=0;
    ii x1,x2;
    scanf("%d %d %d",&t,&y,&q);
    st.resize(t+3);
    nt.assign(t+3,0);
    for(g=0;g<y;g++){
        scanf("%d %d %d",&z,&x,&w);
        st[z].push_back(ii(x,w));
        st[x].push_back(ii(z,w));
    }
    while(q--){
        dis.assign(t+3,1e9);
        pr.resize(t+3);
        scanf("%d %d",&s,&e);
        dis[s]=0;
        qq.push(ii(0,s));
        while(!qq.empty()){
            x1=qq.top();
            qq.pop();
            z=x1.first, x=x1.second;
            if(z>dis[x])continue;
            for(g=0;g<st[x].size();g++){
                x2=st[x][g];
                if(dis[x]+x2.second<dis[x2.first]){
                    pr[x2.first]=x;
                    dis[x2.first]=dis[x]+x2.second;
                    qq.push(ii(dis[x2.first],x2.first));
                }
            }
        }
        path(e);
        re+=dis[e];
        dis.clear(), pr.clear();
        printf("\n");
    }
    for(g=1;g<=t;g++){
        if(nt[g]>xx){
            xx=nt[g];
            ps=g;
        }
    }
    for(g=1;g<=t;g++)if(ps==g){
        for(h=0;h<st[g].size();h++){
            x1=st[g][h];
            if(nt[x1.first]==xx){
                re-=(nt[ps]*x1.second);
                break;
            }
        }
    }
    printf("\n%d\n",re);
    return 0;
}
