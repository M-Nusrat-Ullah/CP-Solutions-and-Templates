#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k;
    string str[55];

    scanf("%d", &n);

    while(n--){
        int numWord, lengthWord;
        scanf("%d %d", &numWord, &lengthWord);
        for(i = 0; i < numWord; i++){
            cin >> str[i];
        }

        int highAlphabet, lowAlphabet, mindiff = 1e9, sum;
        for(i = 0; i < numWord; i++){
            for(j = i+1; j < numWord; j++){

                sum = 0;
                for(k = 0; k < lengthWord; k++){
                    highAlphabet = max(str[i][k], str[j][k]);
                    lowAlphabet = min(str[i][k], str[j][k]);
                    sum += ((highAlphabet - lowAlphabet));
                }

                mindiff = min(mindiff, sum);
            }
        }

        printf("%d\n", mindiff);
    }
    return 0;
}
