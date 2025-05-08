#include<bits/stdc++.h>
using namespace std;
int main()
{
    int re,x,t,y;
    cin>>t>>y;
    x=t/2;
    if(y<=x)
        if(!y)re=1;
        else re=y;
    else re=t-y;
    printf("%d\n",re);
    return 0;
}
