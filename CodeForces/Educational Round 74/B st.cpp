#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,n,r,i,x,cnt,mx,c1;
    set<int>s;
    cin>>q;
    while(q--){
        cin>>n>>r;
        for(i=0;i<n;i++)cin>>x,s.insert(x);
        cnt=0;
        for(auto j=s.rbegin();j!=s.rend();j++){
            c1=cnt;
            x=*j;
            while(c1--)x-=r;
            if(x>0)cnt++;
            else break;
        }
        cout<<cnt<<endl;
        s.clear();
    }
    return 0;
}
