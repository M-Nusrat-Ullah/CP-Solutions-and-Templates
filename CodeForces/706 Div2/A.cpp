#include<bits/stdc++.h>
using namespace std;
bool possible(int w,string a,string s)
{
    for(int g=0;g<w;g++)if(a[g]!=s[g])
        return false;
    return true;
}
int main()
{
    int t,q,w;
    string a,s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        cin>>a;
        s=a;
        reverse(s.begin(),s.end());
        if(!w||possible(w,a,s)&&((q+1)>>1)>=w+1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
