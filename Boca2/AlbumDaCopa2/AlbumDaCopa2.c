#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, espaco;
    
    scanf("%d", &N);
    scanf("%d", &M);
    
    N = abs(N);
    M = abs(M);
    espaco = N;

    int* album = (int*) malloc(N * sizeof(int));

    for(int i = 0; i < M; i++){
        int X;

        scanf("%d", &X);
        X = abs(X);

        album[X-1] = 1;
    }

    for(int j = 0; j < N; j++){
        if(album[j] == 1) espaco--;
    }

    printf("%d\n", espaco);
    free(album);

    return 0;
}