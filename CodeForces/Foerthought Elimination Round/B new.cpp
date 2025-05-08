#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,f;
    string t,s,cs,re;
    bool k=true;
    cin>>t;
    s=t;
    size_t al=count(s.begin(),s.end(),'a');
    s.erase(std::remove(s.begin(),s.end(),'a'),s.end());
    cs=s;
    if(cs=="")cout<<t<<endl;
    else if(cs.length()&1){
        cout<<":("<<endl;
        return 0;
    }
    else{
        for(g=(cs.length()/2)-1,h=cs.length()-1,f=t.length()-1;g>=0;g--,h--,f--)
            if(cs[g]!=cs[h]||t[f]!=cs[h]){
                k=false;
                cout<<":("<<endl;
                break;
            }
        if(k){
            t.erase(t.begin()+(cs.length()/2+al),t.end());
            cout<<t<<endl;
        }
    }
    return 0;
}
