#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, *V, *W;

    scanf("%d", &N);

    V = (int*) malloc(sizeof(int)*N);
    W = (int*) malloc(sizeof(int)*N);

    for(int i = 0; i < N; i++){
        scanf("%d", &V[i]);
        W[i] = 3*V[i];
    }

    for(int i = 0; i < N-1; i++){
        printf("%d ", W[i]);
    }
    printf("%d\n", W[N-1]);

    return 0;
}