#include<bits/stdc++.h>
using namespace std;
int main()
{
    string q,w;
    cin>>q>>w;
    reverse(q.begin(),q.end());
    if(q==w)printf("YES\n");
    else printf("NO\n");
    return 0;
}
