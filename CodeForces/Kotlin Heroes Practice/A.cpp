#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        if(x<8)re=1;
        else{
            if(x%7)re=x/7+1;
            else re=x/7;
        }
        printf("%d\n",re);
    }
    return 0;
}
