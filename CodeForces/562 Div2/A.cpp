#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,w,z,x;
    bool k=false;
    cin>>t>>q>>w>>z>>x;
    g=q, h=z;
    while(g!=w&&h!=x){
        if(g<t)g++;
        else g=1;
        if(h>1)h--;
        else h=t;
        if(g==h){
            k=true;
            break;
        }
    }
    if(k)printf("YES\n");
    else printf("NO\n");
    return 0;
}
