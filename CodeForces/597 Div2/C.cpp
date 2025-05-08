#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main()
{
    int g;
    long long nt,re=1,st[100007];
    string q;
    st[0]=0,st[1]=1;
    for(g=2;g<=100003;g++)
        st[g]=(((st[g-1]%M)+(st[g-2]%M))%M);
    cin>>q;
    for(g=0;q[g];g++)
        if(q[g]=='m'||q[g]=='w'){
            printf("0\n");
            return 0;
    }
    for(g=0,nt=0;q[g];g++){
        if(q[g]=='n')nt++;
        else if(nt)re*=st[nt+1],re%=M, nt=0;
    }
    if(nt)re*=st[nt+1],re%=M;
    for(g=0,nt=0;q[g];g++){
        if(q[g]=='u')nt++;
        else if(nt)re*=st[nt+1],re%=M, nt=0;
    }
    if(nt)re*=st[nt+1],re%=M;
    printf("%I64d\n",re);
    return 0;
}
