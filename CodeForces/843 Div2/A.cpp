#include<bits/stdc++.h>
using namespace std;
string str;
int a;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>str;
        int i, res1=-1,res2, mn=str.length()-1;
        for(i=str.length()-2;i>0;i--){
            if(str[i]<str[mn]) mn=i;
            else if(str[i]>=str[0]&&str[i]>=str[mn]){
                res1=i;
                res2=mn;
            }
        }
        mn=str.length()-1;
        for(i=str.length()-2;i>0;i--){
            if(str[i]>str[mn]) mn=i;
            else if(str[i]<=str[0]&&str[i]<=str[mn]){
                res1=i;
                res2=mn;
            }
        }
        if(res1==-1)printf(":(\n");
        else{
            for(i=0;i<res1;i++)printf("%c",str[i]);
            printf(" ");
            for(i=res1;i<res2;i++)printf("%c",str[i]);
            printf(" ");
            for(i=res2;i<str.length();i++)printf("%c",str[i]);
            printf("\n");
        }
    }
    return 0;
}
