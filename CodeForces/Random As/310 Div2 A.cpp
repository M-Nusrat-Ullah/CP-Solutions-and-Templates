#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,o,z;
    string q;
    cin>>t>>q;
    for(g=o=z=0;g<t;g++)
        if(q[g]=='1')o++;
        else z++;
    printf("%d\n",t-2*min(o,z));
    return 0;
}
