#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{
    int g,h,f,j,t,q,w,x,re1;
    vector<ii>wq,re;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&q,&w);
        for(g=1;g<=q;g++){
            scanf("%d",&x);
            wq.push_back(ii(x,g));
        }
        if(w<q||q==2){printf("-1\n");continue;}
        sort(wq.begin(),wq.end());
        re1=0;
        if(w>1){
            re.push_back(ii(wq[0].second,wq[q-1].second));
            re.push_back(ii(wq[0].second,wq[q-2].second));
            re1=wq[0].first*2+wq[q-1].first+wq[q-2].first;
            w-=2;
        }
        if(q>5){
            for(g=1,j=q-1;g<q/2-1;g++,j--)
                for(f=0,h=j;f<2;f++,h-=2)
                    w--, re1+=(wq[g].first+wq[h].first), re.push_back(ii(wq[g].second,wq[h].second));
            re.push_back(ii(wq[g].second,wq[g+1].second));
            re.push_back(ii(wq[g].second,wq[g+2].second));
            re1+=(wq[g].first+wq[g+1].first);
            re1+=(wq[g].first+wq[g+2].first),
            w-=2;
            while(w--)
                re1+=(wq[0].first+wq[q-1].first),re.push_back(re[0]);
        }
        else if(q==5){
            for(g=1,j=q-1;g<q/2;g++,j--)
                for(f=0,h=j;f<2;f++,h-=2)
                    w--,re1+=(wq[g].first+wq[h].first), re.push_back(ii(wq[g].second,wq[h].second));
            re.push_back(ii(wq[g].second,wq[g+1].second));
            re1+=(wq[g].first+wq[g+1].first);
            w--;
            while(w--)
                re1+=(wq[0].first+wq[q-1].first),re.push_back(re[0]);
        }
        else if(q==4){
            re.push_back(ii(2,4));
            re.push_back(ii(2,3));
            re1+=(wq[1].first+wq[3].first);
            re1+=(wq[1].first+wq[2].first);
            w--;
            while(w--)
                re1+=(wq[0].first+wq[q-1].first),re.push_back(re[0]);
        }
        else if(q==3){
            re.push_back(ii(2,3));
            re1+=(wq[2].first+wq[3].first);
            w--;
            while(w--)
                re1+=(wq[0].first+wq[q-1].first),re.push_back(re[0]);
        }
        printf("%d\n",re1);
        for(g=0;g<re.size();g++)
            printf("%d %d\n",re[g].first,re[g].second);
        wq.clear();
        re.clear();
    }
    return 0;
}
