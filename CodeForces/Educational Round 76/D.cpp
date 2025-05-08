#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int wq[200003];
vector<ii>ew;
int main()
{
    int t,q,w,z,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&q);
        for(g=0;g<q;g++)
            scanf("%d",&wq[g]);
        scanf("%d",&w);
        for(g=0;g<w;g++){
            scanf("%d %d",&z,&x);
            ew.push_back(ii(x,z));
        }
        sort(ew.begin(),ew.end());
        for(g=0;g<q;g++){

        }
    }
}
