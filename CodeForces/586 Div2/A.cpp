#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,ntz=0,nto=0;
    string q,w;
    cin>>t>>q;
    for(g=0;g<t;g++){
        if(q[g]=='z')ntz++;
        else if(q[g]=='o')nto++;
    }
    for(g=0;g<nto-ntz;g++)printf("1 ");
    for(g=0;g<ntz;g++)printf("0 ");
    return 0;
}
