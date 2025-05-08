#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{
    int g,t,y,q,w,z,x,re=0;
    vector<ii>wq;
    scanf("%d %d",&t,&y);
    for(g=0;g<t;g++){
        scanf("%d %d",&q,&w);
        wq.push_back(ii(q,w));
    }
    sort(wq.begin(),wq.end());
    for(g=0;g<t;g++){
        if(!g){
            z=max(0,wq[g].first-wq[g].second-1);
          //  if(!wq[g].second)re++;
            re+=z;
            wq[g].first+=(z+wq[g].second);
        }
        else{
            z=max(0,wq[g].first-wq[g].second-wq[g-1].first-1);
           // if(!wq[g].second)re++;
            re+=z;
            if(wq[g].first+z+wq[g].second<wq[g-1].first)wq[g].first=wq[g-1].first;
            else wq[g].first+=(z+wq[g].second);
        }
        if(g==t-1){
            if(wq[g].first>=y)re+=0;
            else re+=(y-wq[g].first);
        }
    }
    for(g=0;g<t;g++)
        printf("%d\n",wq[g].first);
    printf("%d\n",re);
    return 0;
}
