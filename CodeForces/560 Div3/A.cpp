#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,y,nt=0;
    string q;
    cin>>t>>x>>y>>q;
    for(g=t-1;g>=t-x;g--){
        if(q[g]=='1'&&g!=t-y-1)nt++;
        else if(g==t-y-1&&q[t-y-1]=='0')nt++;
    }
    printf("%d\n",nt);
    return 0;
}
