#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h;
    string t,s,cs,re;
    bool k=true;
    cin>>t;
    s=t;
    size_t al=count(s.begin(),s.end(),'a');
    s.erase(std::remove(s.begin(),s.end(),'a'),s.end());
    cs=s;
    if(cs=="")cout<<t<<endl;
    else if(t[t.length()-1]=='a'||cs.length()&1){
        cout<<":("<<endl;
        return 0;
    }
    else{
        for(g=0,h=cs.length()/2;g<cs.length()/2;g++,h++)
            if(cs[g]!=cs[h]){
                k=false;
                cout<<":("<<endl;
                break;
            }
        cs.erase(cs.begin()+0,cs.end()-(cs.length()/2));
        s=cs;
        cout<<s<<" "<<t<<endl;
        for(g=s.length()-1,h=t.length()-1;s[g];g--){
            if(s[g]!=t[h]){
                k=false;
                cout<<":("<<endl;
                break;
            }
        }
        if(k){
            t.erase(t.begin()+(g+al),t.end());
            cout<<t<<endl;
        }
    }
    return 0;
}
