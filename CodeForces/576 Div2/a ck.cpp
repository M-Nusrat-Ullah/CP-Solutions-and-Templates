#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,z,k,j,mn;
    int x,y,cnt1,cnt2;
    cin>>n>>x>>y;
    ll a[n+5];
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    {
        cnt1=0;
         cnt2=0;

        z=i-x;
        if(z<1)
            z=1;
        k=i+y;
        if(k>n)
            k=n;
        for(j=i;j<=k;j++)
            if(a[i]<a[j])
                cnt1++;
        for(j=i;j>=z;j--)
            if(a[i]<a[j])
                cnt2++;
        printf("x=%d , y=%d\n",x,y);
        printf("%d=%d , %d=%d\n\n",cnt1,x,cnt2,y);
        if(cnt1<=y &&cnt2==x){
            mn=i;
            break;
        }
    }
    cout<<mn<<endl;

    return 0;
}
