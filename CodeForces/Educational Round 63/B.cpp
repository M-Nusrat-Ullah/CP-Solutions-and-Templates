#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ent,mnt,pnt;
    string s;
    cin>>t>>s;
    ent=count(s.begin(),s.end()-10,'8');
    mnt=t-11;
    pnt=mnt/2;
    if(ent>pnt)printf("YES\n");
    else printf("NO\n");
    return 0;
}
