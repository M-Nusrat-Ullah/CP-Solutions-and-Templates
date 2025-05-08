#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dd;
vector<ll>x1,y1;
int main()
{
    int g,t,q,w,y;
    double re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<(y<<1);g++){
            scanf("%d %d",&q,&w);
            if(!q){
                if(w>0)x1.push_back(w);
                else x1.push_back(-w);
            }
            else{
                if(q>0)y1.push_back(q);
                else y1.push_back(-q);
            }
        }
        sort(x1.begin(),x1.end());
        sort(y1.begin(),y1.end());
        for(g=re=0;g<y;g++)
            re+=sqrt((dd)(x1[g]*x1[g])+(dd)(y1[g]*y1[g]));
        printf("%.15f\n",re);
        x1.clear(), y1.clear();
    }
    return 0;
}
