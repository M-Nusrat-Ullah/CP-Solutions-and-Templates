#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,re=0;
    string q,w;
    cin>>q>>w;
    for(g=0;q[g];g++)
        if(tolower(q[g])>tolower(w[g])){re=1; break;}
        else if(tolower(q[g])<tolower(w[g])){re=-1;break;}
    printf("%d\n",re);
    return 0;
}
