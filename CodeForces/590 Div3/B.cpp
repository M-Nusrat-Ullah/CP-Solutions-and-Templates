#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class DSU
{
private:
    int ts;
    vi p,ss,rk;
public:
    DSU(int n)
    {
        int g;
        ts=n;
        p.resize(n);
        rk.assign(n,0);
        ss.assign(n,1);
        for(g=0;g<n;g++)
            p[g]=g;
    }
    int find_set(int i)
    {
        return p[i]==i? i: p[i]=find_set(p[i]);
    }
    bool same_set(int i,int j)
    {
        return find_set(i)==find_set(j);
    }
    void create_set(int i,int j)
    {
        int x,y;
        if(!same_set(i,j)){
            ts--;
            x=find_set(i),
            y=find_set(j);
            if(rk[x]>rk[y]){
                p[y]=x;
                ss[x]+=ss[y];
            }
            else{
                p[x]=y;
                ss[y]+=ss[x];
                if(rk[x]==rk[y])
                    rk[y]++;
            }
        }
    }
    int total_set()
    {
        return ts;
    }
    int set_size(int i)
    {
        return ss[find_set(i)];
    }
};
{
    int g,t,y,k,x;
    scanf("%d %d",&t,&y);
    k=min(t,y);
    DSU dsu(t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        if(!g){
            dsu.create_set()
        }
    }
}
