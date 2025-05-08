#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g,re=0,z;
    scanf("%d",&t);
    vector<int>wq;
    for(g=0;g<t;g++){scanf("%d",&z);wq.push_back(z);}
    sort(wq.begin(),wq.end());
    for(g=0;g<t;g++){
        auto i=upper_bound(wq.begin(),wq.end(),wq[g]+5);
        re=max(re,i-(wq.begin()+g));
    }
    printf("%d\n",re);
    return 0;
}
