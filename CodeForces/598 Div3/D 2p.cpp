#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,x,nt;
    long long w;
    string z;
    scanf("%d",&t);
    while(t--){
        cin>>q>>w>>z;
        for(g=h=nt=0;z[g]&&w;g++){
            if(z[g]=='0'){
                x=min((long long)g-h,w);
                w-=x, h++;
                swap(z[g],z[g-x]);
            }
        }
        printf("%s\n",z.c_str());
    }
    return 0;
}

