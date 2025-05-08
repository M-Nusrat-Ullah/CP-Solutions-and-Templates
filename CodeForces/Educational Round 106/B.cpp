#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t;
    bool k,re;
    string a;
    vector<int>q,w;
    scanf("%d",&t);
    while(t--){
        cin>>a;
        for(g=0;a[g];g++){
            if(a[g]=='0')q.push_back(g);
            else w.push_back(g);
        }
        re=true;
        if(q.size()&&w.size()){
            k=true, re=false;
            for(g=1;g<w.size();g++)if(w[g-1]+1==w[g])
                k=false;
            if(k)re=true;
            g=upper_bound(q.begin(),q.end(),w[0])-q.begin();
            k=true;
            for(g++;g<q.size();g++)if(q[g-1]+1==q[g])
                k=false;
            if(k)re=true;
        }
        printf("%s\n",re?"YES":"NO");
        q.clear(), w.clear();
    }
    return 0;
}
