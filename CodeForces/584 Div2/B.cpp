#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
vi k;
vvii st;
priority_queue<ii>pq;
void process(int x)
{
    int g;
    ii z;
    k[x]=1;
    for(g=0;g<st[x].size();g++){
        z=st[x][g];
        if(!k[z.first])
            pq.push(ii(-z.second,-z.first));
    }
}
int process_mst()
{
    int g,x,re=0;
    ii z;
    process(0);
    while(!pq.empty()){
        z=pq.top(), pq.pop();
        g=-z.second, x=-z.first;
        if(!k[g]){
            re+=x;
            process(g);
        }
    }
    return re;
}
int main()
{
    int t,y,q,w,e,re;
    while(scanf("%d %d",&t,&y)&&(t||y)){
        st.resize(t+3);
        k.assign(t+3,0);
        re=0;
        while(y--){
            scanf("%d %d %d",&q,&w,&e);
            st[q].push_back(ii(w,e));
            st[w].push_back(ii(q,e));
            re+=e;
        }
        re-=process_mst();
        printf("%d\n",re);
        st.clear();
    }
    return 0;
}
