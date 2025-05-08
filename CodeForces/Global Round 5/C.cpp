#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x,y,z;
    point(){
        x=y=z=0;
    }
    point(int _x,int _y,int _z):x(_x),y(_y),z(_z){}
    bool operator<(point other)const{
        if(fabs(z-other.z)>1e-9)
            return z<other.z;
        if(fabs(y-other.y)>1e-9)
            return y<other.y;
        return x<other.x;
    }
};
int main()
{
    int g,t,x,y,z;
    vector<pair<point,int>>wq;
    scanf("%d",&t);
    for(g=1;g<=t;g++){
        scanf("%d %d %d",&x,&y,&z);
        wq.push_back(make_pair(point(x,y,z),g));
    }
    sort(wq.begin(),wq.end());
    for(g=0;g<t;g+=2)
        printf("%d %d\n",wq[g].second,wq[g+1].second);
    return 0;
}
