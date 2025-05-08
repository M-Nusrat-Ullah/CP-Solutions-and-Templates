#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,nt=0;
    string q,w;
    vector<int>re;
    bool k=true;
    cin>>t>>q>>w;
    for(g=0;w[g];g++){
        h=g;
        while(w[g]!=q[h]&&q[h])h++;
        if(!q[h]){k=false;break;}
        if(g!=h){
            nt++;
            re.push_back(h);
            swap(q[g],q[h]);
        }
    }
}
