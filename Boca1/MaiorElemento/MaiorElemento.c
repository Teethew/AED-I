#include <stdio.h>
#include <stdlib.h>

void leVetor(long n, int* array);
int maiorPosicao(long n, int* array);

int main() {
    long n;
    int* v;

    while(1){
        scanf("%ld\n", &n);

        if(n <= 0) break;

        v = (int*) malloc(sizeof(int) * n);

        leVetor(n, v);

        int posicao = maiorPosicao(n, v);
        
        printf("%d %d\n", posicao, v[posicao]);
        free(v);
    }

    return 0;
}

void leVetor(long n, int* array)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &array[i]);
    }
}

int maiorPosicao(long n, int* array){
    int maior = 0;

    for(int i = 0; i < n; i++){
        if(array[maior] < array[i])
            maior = i;
    }
    return maior;
}