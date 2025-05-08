#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,nt=0;
    string q;
    cin>>q;
    for(g=0;q[g];g++)
        if(q[g]=='4'||q[g]=='7')
            nt++;
    if(nt==4||nt==7)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
