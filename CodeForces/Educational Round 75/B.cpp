#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nto,ntz,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        int ew[5]={0};
        vector<pair<int,string>>q(y);
        for(g=re=0;g<y;g++){
            cin>>q[g].second;
            q[g].first=q[g].second.length();
        }
        sort(q.begin(),q.end());
        for(g=0;g<y;g++){
            for(h=nto=ntz=0;q[g].second[h];h++)
                if(q[g].second[h]=='1') nto++;
                else ntz++;
            ew[1]+=nto, ew[0]+=ntz;
        }
        for(g=y-1;g>=0;g--){
            if(ew[0]>ew[1]){
                if(q[g].first<=ew[0])re++, ew[0]-=q[g].first;
                else{
                    if(q[g].first&1)if(q[g].first/2+1==ew[0]||q[g].first/2+1==ew[1])re++;
                    else if(q[g].first/2==ew[0]||q[g].first/2==ew[1])re++;
                }
            }
            else{
                if(q[g].first<=ew[1])re++, ew[1]-=q[g].first;
                else{
                    if(q[g].first&1)if(q[g].first/2+1==ew[0]||q[g].first/2+1==ew[1])re++;
                    else if(q[g].first/2==ew[0]||q[g].first/2==ew[1])re++;
                }
            }
        }
        printf("%d\n",re);
        q.clear();
    }
    return 0;
}
