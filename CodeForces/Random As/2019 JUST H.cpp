#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,x,len;
    bool ck;
    string q,k="abcdefghijklmnopqrstuvwxyz";
    len=k.length();
    scanf("%d",&t);
    while(t--){
        cin>>q;
        ck=true;
        x=k.find(q[0]);
        for(g=0;q[g];g++,x++)
            if(q[g]!=k[x%len]){
                ck=false;
                break;
        }
        if(ck)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
