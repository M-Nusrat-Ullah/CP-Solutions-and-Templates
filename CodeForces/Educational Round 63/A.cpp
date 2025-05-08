#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t;
    string s;
    bool k=false;
    cin>>t>>s;
    for(g=0,h=1;h<s.length()&&!k;g++,h++)
        if(s[h]<s[g])k=true;
    if(k)printf("YES\n%d %d\n",g,h);
    else printf("NO\n");
    return 0;
}
