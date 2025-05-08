#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t;
    string q;
    cin>>t;
    while(t--){
        cin>>q;
        int re[31]={0}, k[31]={0};
        for(g=0;q[g];g++)if(!k[q[g]-'a']){
            k[q[g]-'a']=1;
            for(h=0;q[h];h++)
                if(q[h]==q[g]&&q[h]!=q[h+1])
                    re[q[g]-'a']=1;
                else if(q[h]==q[g]&&q[h]==q[h+1]) h++;
        }
        for(g=0;g<26;g++)if(re[g])
            printf("%c",char(g+'a'));
        printf("\n");
    }
    return 0;
}
