#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, arr[55];

    cin >> n;
    while(n--){
        cin >> m;

        int minimumValue = 1e9;
        for(i = 0; i < m; i++){
            cin >> arr[i];
            minimumValue = min(minimumValue, arr[i]);
        }

        int sum = 0;
        for(i = 0; i < m; i++){
            sum += (arr[i] - minimumValue);
        }

        printf("%d\n", sum);
    }

    return 0;
}
