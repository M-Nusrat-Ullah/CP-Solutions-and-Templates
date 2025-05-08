#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h;
    string x,q,w="hello";
    cin>>x;
    for(g=h=0;x[g];g++)
        if(x[g]==w[h])q+=x[g],h++;
    if(q==w)printf("YES\n");
    else printf("NO\n");
    return 0;
}
