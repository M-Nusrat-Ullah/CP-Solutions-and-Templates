#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,g,h,f,re;
    scanf("%d %d",&t,&y);
    vector<int>wq;
    for(g=0;g<t;g++){
        scanf("%d",&h);
        wq.push_back(h);
    }
    sort(wq.rbegin(),wq.rend());
    for(g=1;g<=t;g++){
        for(h=0,re=0;h<t;h++){
            re+=max(0,wq[h]-(h/g));
            if(re>=y)break;
        }
        if(re>=y)break;
    }
    if(re>=y)printf("%d\n",g);
    else printf("-1\n");
    return 0;
}
