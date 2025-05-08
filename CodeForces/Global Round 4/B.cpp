#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,o;
    long long re;
    bool k;
    vector<int>nt;
    string q;
    cin>>q;
    nt.push_back(0);
    for(h=o=k=0;q[h+1];h++){
        if(q[h]=='v'&&q[h+1]=='v'){
            if(k)nt.push_back(nt[nt.size()-1]+o), o=0;
            k=true;
        }
        else if(k&&q[h]=='o')o++;
    }
    for(g=re=0;g<nt.size();g++){
        printf("%d ",nt[g]);
        for(h=g+1;h<nt.size();h++)
            re+=(nt[h]-nt[g]);
    }
    printf("\n%d\n",re);
    return 0;
}
