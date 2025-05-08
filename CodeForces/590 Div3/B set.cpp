#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x,k,z;
    deque<int>dq;
    set<int>st;
    scanf("%d %d %d",&t,&y,&x);
    dq.push_front(x);
    st.insert(x);
    k=min(t,y);
    for(g=1;g<t;g++){
        scanf("%d",&x);
        if(st.find(x)==st.end())
            if(dq.size()==k){
                z=dq.back();
                dq.pop_back();
                dq.push_front(x);
                st.erase(st.find(z));
                st.insert(x);
            }
            else{
                dq.push_front(x);
                st.insert(x);
            }
    }
    printf("%d\n",dq.size());
    for(g=0;g<dq.size();g++)
        printf("%d ",dq[g]);
    return 0;
}
