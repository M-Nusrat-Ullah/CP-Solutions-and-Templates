#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b,c,d,e,a[10],cnt=0,mx,mn;
    cin>>a[0]>>a[1]>>a[2]>>d;
    mx=mn=a[0];
    for(i=0;i<3;i++)
    {
        if(a[i]>mx)
            mx=a[i];
        if(a[i]<mn)
            mn=a[i];
    }
    for(i=0,b=a[0];i<3;i++)
    {
        if(a[i]<mx&&a[i]>mn)
            b=a[i];
    }
    printf("%d %d %d\n",mx,mn,b);
    c=b+d;
    e=b-d;
    if(mx<c) cnt+=c-mx;
    if(mn>e) cnt+=mn-e;
    cout<<cnt<<endl;
    return 0;
}
