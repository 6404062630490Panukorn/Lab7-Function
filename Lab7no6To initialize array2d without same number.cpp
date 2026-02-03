#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int M, N;
    int arr[20][20];
    int used[101] = {0};   
    int num;

    scanf("%d %d", &M, &N);

    if (M <= 2 || N <= 2 || M >= 20 || N >= 20 || M * N > 101) {
        printf("Invalid size\n");
        return 0;
    }

    srand(time(NULL));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            do {
                num = rand() % 101 + 100;   
            } while (used[num - 100] == 1);

            used[num - 100] = 1;
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

