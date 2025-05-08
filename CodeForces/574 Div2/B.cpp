#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>st;
int main()
{
    int g,t,y,lo,hi,m;
    st.push_back(0);
    for(g=1;g<=1e5;g++)
        st.push_back(st[g-1]+g);
    scanf("%d %d",&t,&y);
    lo=0,hi=st.size()-1;
    while(lo<=hi){
        m=(lo+hi)>>1;
        if(st[m]-y==t-m)break;
        else if(st[m]-y>t-m)hi=m-1;
        else lo=m+1;
    }
    printf("%d\n",t-m);
    return 0;
}
