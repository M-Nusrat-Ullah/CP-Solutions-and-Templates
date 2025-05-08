#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,y,re1,re2;
    string q;
    scanf("%d",&t);
    while(t--){
        cin>>y>>q;
        re1=re2=0;
        for(g=1;g<y;g++)if(q[g]==q[g-1])
            if(q[g]=='0')re1++;
            else re2++;
        printf("%d\n",max(re1,re2));
    }
    return 0;
}
