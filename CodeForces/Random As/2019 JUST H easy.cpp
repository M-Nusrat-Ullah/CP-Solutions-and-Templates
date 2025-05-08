#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    string q,k="abcdefghijklmnopqrstuvwxyz";
    while(k.length()<=1000)
        k+=k;
    scanf("%d",&t);
    while(t--){
        cin>>q;
        x=k.find(q);
        if(x!=string::npos)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

