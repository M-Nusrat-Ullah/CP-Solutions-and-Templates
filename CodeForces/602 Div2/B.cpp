#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,wq[100003],re[100003];
    set<int>k;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        for(g=1;g<=y;g++){
            scanf("%d",&wq[g-1]);
            k.insert(g);
        }
        for(g=0;g<y;g++){
            auto h=k.find(wq[g]);
            if(h==k.end()){
                auto x=k.begin();
                if(*x<wq[g])re[g]=*x, k.erase(x);
                else break;
            }
            else re[g]=wq[g],k.erase(h);
        }
        if(k.size())printf("-1");
        else for(g=0;g<y;g++)
                printf("%d ",re[g]);
        printf("\n");
        k.clear();
    }
    return 0;
}
