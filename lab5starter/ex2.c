#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int m;
int temp;

int main() {
	// code here
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%i", &temp);
            A[i][j] = temp;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%i", &temp);
            B[i][j] = temp;
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int k = 0; k < m; k++) {
            for (int j = 0; j < m; j++) {
                C[i][k] += A[i][j] * B[j][k];
                //C[0][1] += A[i][j] * B[j][k]
                //C[0][1] += A[0][0] * B[0][1];
                //C[0][0] += A[0][1] * B[1][1];
             }
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }
}
