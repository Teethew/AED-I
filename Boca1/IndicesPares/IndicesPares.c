#include <stdio.h>
#include <stdlib.h>

void leVetor(long n, int* array);

int main() {
    long n;
    int* v;

    scanf("%ld\n", &n);

    v = (int*) malloc(sizeof(int) * n);

    leVetor(n, v);

    int count = 0;

    for(int i = 0; i < n; i++){
  
        if(v[i] % 2 == 0) count++;
        if(i % 2 == 0)
            printf("%d ", v[i]);
    }

    printf("%d\n", count);
    free(v);

    return 0;
}

void leVetor(long n, int* array)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &array[i]);
    }
}