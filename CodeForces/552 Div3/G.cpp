#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
    point(){x=y=0;}
    point(int _x,int _y):x(_x),y(_y){}
    bool operator<(point other)const{
        if(abs(y-other.y)>0)
            return y<other.y;
    }
};
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    int i,j,t,q,w,x,mini=1e9;
    scanf("%d",&t);
    vector<point>wq;
    for(i=1;i<=t;i++){
        scanf("%d",&x);
        wq.push_back(point(i,x));
    }
    sort(wq.begin(),wq.end());
    printf("%d %d\n",wq[0].x,wq[1].x);
    return 0;
}
