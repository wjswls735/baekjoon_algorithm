#include <stdio.h>
#define MMAX 301

int main() {

    int t, i, j, x, y, sum, N, M, K;
    int arr[MMAX][MMAX] = { 0, };
    int temp[MMAX][MMAX]= { 0, };

    scanf("%d %d", &N, &M);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= M; j++) {
            scanf("%d", &arr[i][j]);
            temp[i][j] = temp[i-1][j] + temp[i][j-1] + arr[i][j] - temp[i-1][j-1];
        }
    }

    scanf("%d", &K);

    for (t = 0; t < K; t++) {
        scanf("%d %d %d %d", &x, &y, &i, &j);
        printf("%d\n", temp[i][j] - temp[i][y-1] - temp[x-1][j] + temp[x-1][y-1]);
    }

    return 0;
}
