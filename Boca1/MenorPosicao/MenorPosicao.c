#include <stdio.h>
#include <stdlib.h>

void leVetor(long int n, long* array);
long menorPosicao(long n, long* array);

int main() {
    long n;
    long* v;

    scanf("%ld\n", &n);

    v = (long*) malloc(sizeof(long) * n);

    leVetor(n, v);
    long posicao = menorPosicao(n, v);

    printf("Menor valor: %ld\n", v[posicao]);
    printf("Posicao: %ld\n", posicao);

    free(v);

    return 0;
}

void leVetor(long int n, long* array)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%ld\n", &array[i]);
    }
}

long menorPosicao(long n, long* array){
    long menor = 0;

    for(int i = 0; i < n; i++){
        if(array[menor] > array[i])
            menor = i;
    }
    return menor;
}