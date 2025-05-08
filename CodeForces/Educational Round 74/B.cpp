#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,x,nt,nt1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&y,&x);
        vector<int>wq(y);
        for(g=0;g<y;g++)scanf("%d",&wq[g]);
        sort(wq.begin(),wq.end());
        wq.erase(unique(wq.begin(),wq.end()),wq.end());
        for(nt=1,g=wq.size()-2;g>=0;g--){
            nt1=nt;
            while(nt1--)wq[g]-=x;
            if(wq[g]>0)nt++;
            else break;
        }
        printf("%d\n",nt);
    }
    return 0;
}
