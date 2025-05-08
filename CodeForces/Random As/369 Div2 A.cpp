#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x;
    bool k;
    string re[1003];
    scanf("%d",&t);
    for(g=0;g<t;g++)cin>>re[g];
    for(g=k=0;g<t;g++){
        x=re[g].find("OO");
        if(x!=string::npos){
            re[g].replace(x,2,"++");
            k=true;
            break;
        }
    }
    if(k){
        printf("YES\n");
        for(g=0;g<t;g++)
            cout<<re[g]<<endl;
    }
    else printf("NO\n");
    return 0;
}
