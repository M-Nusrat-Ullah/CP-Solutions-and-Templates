#include<bits/stdc++.h>
using namespace std;
string q;
int nt(int lo,int hi)
{
    int g,nt1=0,wq[27]={0};
    while(lo<=hi){
        wq[q[lo]-'a']++;
        wq[q[hi]-'a']++;
        lo++, hi--;
    }
    for(g=0;g<26;g++)if(wq[g])
        nt1++;
    return nt1;
}
int main()
{
    int g,t,z,x,x1;
    char c;
    cin>>q>>t;
    while(t--){
        cin>>z;
        if(z==1){
            cin>>x>>c;
            q[x-1]=c;
        }
        else{
            cin>>x>>x1;
            printf("%d\n",nt(--x,--x1));
        }
    }
    return 0;
}
