#include<bits/stdc++.h>
using namespace std;
int main()
{
    size_t a,b;
    string q,k1="1111111",k2="0000000";
    cin>>q;
    a=q.find(k1);
    b=q.find(k2);
    if(a!=string::npos||b!=string::npos)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
