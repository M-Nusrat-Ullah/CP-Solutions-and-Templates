#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,h,t,y,nt=1,sublen;
    string q,re;
    bool k;
    cin>>t>>y>>q;
    re=q;
    for(g=1;nt<y;g++)
        if(g==re.length()) re+=q,nt++;
        else{
            for(k=true,h=sublen=0;h<q.length();h++){
                if(g+h==re.length()) break;
                sublen++;
                if(re[g+h]!=q[h])k=false;
            }
            if(k){
                re+=q.substr(sublen);
                nt++;
        }
    }
    cout<<re<<endl;
    return 0;
}
