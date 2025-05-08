#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        printf("%s\n",((2*q)>w)?"Yes":"No");
    }
    return 0;
}
