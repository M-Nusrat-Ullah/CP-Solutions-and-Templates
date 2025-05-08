#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z,ss,ms,ps,re,nt=3;
    vector<int>s,m,p;
    string q;
    while(nt--){
        cin>>z>>q;
        if(q=="s")s.push_back(z);
        else if(q=="m")m.push_back(z);
        else if(q=="p")p.push_back(z);
    }
    sort(s.begin(),s.end());
    sort(m.begin(),m.end());
    sort(p.begin(),p.end());
    ss=s.size(), ms=m.size(), ps=p.size();
    if(ss==3||ms==3||ps==3)
        if(((s[0]==s[1]&&s[1]==s[2])||(s[0]+1==s[1]&&s[1]+1==s[2]))||((m[0]==m[1]&&m[1]==m[2])||(m[0]+1==m[1]&&m[1]+1==m[2]))||((p[0]==p[1]&&p[1]==p[2])||(p[0]+1==p[1]&&p[1]+1==p[2])))re=0;
        else if((s[0]==s[1]||s[1]==s[2]||s[0]+1==s[1]||s[1]+1==s[2])||(m[0]==m[1]||m[1]==m[2]||m[0]+1==m[1]||m[1]+1==m[2])||(p[0]==p[1]||p[1]==p[2]||p[0]+1==p[1]||p[1]+1==p[2]))re=1;
        else re=2;
    else if(ss==2&&(s[0]==s[1]||s[0]+1==s[1])||ms==2&&(m[0]==m[1]||m[0]+1==m[1])||ps==2&&(p[0]==p[1]||p[0]+1==p[1]))
        re=1;
    else re=2;
    printf("%d\n",re);
    return 0;
}
