#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,re=0;
    string q;
    scanf("%d",&t);
    while(t--){
        cin>>q;
        if(q[0]=='T')re+=4;
        else if(q[0]=='C')re+=6;
        else if(q[0]=='O')re+=8;
        else if(q[0]=='D')re+=12;
        else re+=20;
    }
    printf("%d\n",re);
    return 0;
}
