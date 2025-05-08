#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{
    int g,h,t,y,nt;
    bool k,k1;
    vector<ii>re;
    string q,w;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&y);
        cin>>q>>w;
        for(g=nt=0,k1=1;q[g]&&k1;g++){
            if(q[g]!=w[g])for(h=g+1,k=0;q[h]&&!k;h++){
                if(q[h]==q[g]&&q[h]!=w[h])nt++, k=true,
                    re.push_back(ii(h,g)),
                    swap(q[h],w[g]);
                else if(w[h]==q[g]&&w[h]!=q[h])nt+=2, k=true,
                    re.push_back(ii(h,h)), re.push_back(ii(h,g)),
                    swap(w[h],q[h]), swap(q[h],w[g]);
            }
            if(nt>2*y)k1=false;
        }
        if(k1&&q==w){
            printf("Yes\n%d\n",re.size());
            for(g=0;g<re.size();g++)
                printf("%d %d\n",re[g].first+1,re[g].second+1);
        }
        else printf("No\n");
        re.clear();
    }
    return 0;
}
