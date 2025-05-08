#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,l;
    bool k;
    string q;
    cin>>q;
    l=q.length();
    if(l==1)k=true;
    else for(g=k=1;q[g];g++)
        if(islower(q[g]))k=false;
    if(!k)cout<<q;
    else if(k&&islower(q[0]))
        printf("%c",toupper(q[0]));
    else printf("%c",tolower(q[0]));
    if(k) for(g=1;q[g];g++)
            printf("%c",tolower(q[g]));
    printf("\n");
    return 0;
}
