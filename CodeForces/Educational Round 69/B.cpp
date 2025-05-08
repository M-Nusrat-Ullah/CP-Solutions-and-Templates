#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t,x,em,maxa=-1e9,maxp;
    bool k=true;
    vector<int>wq;
    scanf("%d",&t);
    for(g=0;g<t;g++){
        scanf("%d",&x);
        wq.push_back(x);
        if(x>maxa)maxa=x, maxp=g;
    }
    while(wq.size()>1&&k){
        if(!maxp)
            if(wq[0]>wq[1])
                wq[0]=wq[1], wq.erase(wq.begin()+1);
            else k=false;
        else if(maxp==t-1)
            if(wq[wq.size()-1]>wq[wq.size()-2])
                wq[wq.size()-1]=wq[wq.size()-2], wq.erase(wq.begin()+(wq.size()-2));
            else k=false;
        else{
            if(maxp)em=max(wq[maxp-1],wq[maxp+1]);
        }
    }
}
