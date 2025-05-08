#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n; ll s;
        scanf("%d %lld",&n,&s);
        int i,res;
        for(i=1;i<=n+2;i++){
            ll x1=i*n*n;
            ll x2=(n+1-i)*(n-1);
            if(x1+x2<s){
                res=i-1;
                break;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
