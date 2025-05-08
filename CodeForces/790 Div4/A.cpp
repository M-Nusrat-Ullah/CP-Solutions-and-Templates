#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    string str;

    cin >> n;
    while(n--){
        cin >> str;
        int sum1=0, sum2=0;

        for(i=0;i<3;i++)
            sum1 += (str[i]-'0'),
            sum2 += (str[i+3]-'0');

        printf("%s\n", sum1 == sum2 ? "Yes" : "No");

    }
    return 0;
}
