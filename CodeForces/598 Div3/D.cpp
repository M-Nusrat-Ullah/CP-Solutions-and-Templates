#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,q,w,nt;
    string z;
    scanf("%d",&t);
    while(t--){
        cin>>q>>w>>z;
        for(g=h=nt=0;z[g]&&nt<w;g++){
            if(z[g]=='0'){
                h=g;
                while(z[h-1]=='1'&&h>0&&nt<w)
                    swap(z[h],z[h-1]),h--,nt++;
            }
        }
        printf("%s\n",z.c_str());
    }
    return 0;
}
