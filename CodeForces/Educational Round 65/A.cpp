#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y,g;
    string q;
    bool k;
    cin>>t;
    while(t--){
        cin>>y>>q;
        for(g=k=0;g<=y-11;g++)
            if(q[g]=='8'){
                k=true;
                break;
        }
        if(k)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
