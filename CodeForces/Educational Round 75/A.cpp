#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t;
    string q;
    cin>>t;
    while(t--){
        cin>>q;
        int wq[31]={0}, vis[31]={0};
        if(q.length()==1)wq[q[0]-'a']=1;
        for(g=1;q[g];g++){
            if(g==1&&q[g]!=q[g-1]) wq[q[g-1]-'a']=1;
            else if(q[g]==q[g-1]&&!wq[g])wq[q[g]-'a']=0;
            else if(q[g]!=q[g-1])wq[q[g]-'a']=1;
        }
        for(g=0;g<26;g++)if(wq[g])
            printf("%c",char(g+'a'));
    }
    return 0;
}
