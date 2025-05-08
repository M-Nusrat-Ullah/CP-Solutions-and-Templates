#include<bits/stdc++.h>
using namespace std;
int maxa()
{
    int t,x,m=-1e9;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x>m)m=x;
    }
    return m;
}
int main()
{
    int m1,m2;
    m1=maxa();
    m2=maxa();
    printf("%d %d\n",m1,m2);
    return 0;
}
