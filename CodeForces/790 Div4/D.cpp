#include<bits/stdc++.h>
using namespace std;
const int MAX_DIM = 210;
int chess[MAX_DIM][MAX_DIM], leftDiag[MAX_DIM][MAX_DIM], rightDiag[MAX_DIM][MAX_DIM];

int main()
{
    int n, row, column, i, j;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &row, &column);
        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                scanf("%d", &chess[i][j]);
            }
        }

        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                leftDiag[i][j] += chess[i][j];
                if(i - 1 < 0 || j - 1 < 0) continue;
                leftDiag[i][j] += chess[i-1][j-1];
            }
        }

        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                rightDiag[i][j] += chess[i][j];
                if(i - 1 < 0 || j + 1 >= column) continue;
                leftDiag[i][j] += chess[i-1][j+1];
            }
        }

        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                printf("%d ",leftDiag[i][j]);
            }
            printf("\n");
        }
    }
}
