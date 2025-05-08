#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x,k;
    deque<int>dq,dq1;
    scanf("%d %d %d",&t,&y,&x);
    dq.push_front(x);
    k=min(t,y);
    for(g=1;g<t;g++){
        scanf("%d",&x);
        dq1=dq;
        sort(dq1.begin(),dq1.end());
        bool k1=binary_search(dq1.begin(),dq1.end(),x);
        if(!k1)
            if(dq.size()==k){
                dq.pop_back();
                dq.push_front(x);
            }
            else dq.push_front(x);
    }
    printf("%d\n",dq.size());
    for(g=0;g<dq.size();g++)
        printf("%d ",dq[g]);
    return 0;
}
