#include<bits/stdc++.h>
using namespoace std;
typedef pair<int,int> ii;
vector<ii>st;
int main()
{
    int g,t,y,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=0;g<y;g++){
            scanf("%d",&x);
            st.push_back(ii(x,g));
        }
        sort(st.begin(),st.end());
        x=st.back().first;
        for(g=st.size()-2;g>=0;g--){
            z=st[g].first;
            if(x!=z)break;
            x=z;
        }
    }
}
