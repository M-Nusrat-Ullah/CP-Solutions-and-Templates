#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,x,re=0;
    scanf("%d",&t);
    vector<pair<int,int>>wq;
    for(g=0;g<t;g++){
        scanf("%d",&x);
        wq.push_back(make_pair(x,g));
    }
    sort(wq.begin(),wq.end());
    for(g=t-1,h=0;g>=0;g--,h++)
        re+=(wq[g].first*h)+1;
    printf("%d\n",re);
    for(g=t-1;g>=0;g--)
        printf("%d ",wq[g].second+1);
    return 0;
}
