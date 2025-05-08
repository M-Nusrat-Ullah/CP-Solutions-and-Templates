#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x;
    bool k;
    string q,w;
    scanf("%d",&t);
    while(t--){
        cin>>q>>w;
        int nt1[30]={0},nt2[30]={0};
        for(g=0;q[g];g++)
            nt1[q[g]-'a']++,
            nt2[w[g]-'a']++;
        for(g=k=0;g<26&&!k;g++)
            if(nt1[g]&&nt2[g])k=true;
        if(k)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
