#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,r,t,y,x;
    bool k;
    string q[5];
    scanf("%d",&t);
    while(t--){
        cin>>y>>q[0]>>q[1];
        for(g=r=k=0;g<y&&!k;g++){
            x=q[r][g]-'0';
            if(x>=3){
                r^=1;
                x=q[r][g]-'0';
                if(x<=2)k=true;
            }
        }
        if(!r||k)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
