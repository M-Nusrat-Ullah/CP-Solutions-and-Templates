#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,t;
    char c;
    string a;
    map<char,int>mm;
    cin>>t;
    while(t--){
        for(g=0;g<26;g++){
            cin>>c;
            mm[c]=g;
        }
        cin>>a;
        int re=0;
        for(g=1;a[g];g++)
            re+=abs(mm[a[g]]-mm[a[g-1]]);
        printf("%d\n",re);
        mm.clear();
    }
    return 0;
}
