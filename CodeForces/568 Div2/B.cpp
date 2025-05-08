#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,h,nt1,nt2;
    string x,w;
    bool k;
    scanf("%d",&t);
    while(t--){
        cin>>w>>x;
        for(g=h=k=0;x[g]&&w[h]&&!k;g++,h++){
            if(x[g]==w[h]){
                nt1=nt2=0;
                while(w[h]==w[h+1]&&w[h])h++,nt1++;
                while(x[g]==x[g+1]&&x[g])g++,nt2++;
                if(nt2<nt1)k=true;
            }
            else k=true;
        }
        if(x[g]!=w[h])k=true;
        if(!k)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
