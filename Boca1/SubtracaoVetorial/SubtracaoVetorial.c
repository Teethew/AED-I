#include <stdio.h>
#include <stdlib.h>

void leVetor(long int n, double* array);
void printaVetor(long int n, double* array);

int main() {
    long int n;
    double *v, *u, *w;

    while(1) {
        scanf("%ld", &n);

        if(n <= 0) break;

        v = (double*) malloc(sizeof(double) * n);
        u = (double*) malloc(sizeof(double) * n);
        w = (double*) malloc(sizeof(double) * n);

        leVetor(n, v);
        leVetor(n, u);

        for(int i = 0; i < n; i++)
            w[i] = v[i] - u[i];

        printaVetor(n, w);

        free(v);
        free(u);
        free(w);
    }

    return 0;
}

void leVetor(long int n, double* array)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%lf\n", &array[i]);
    }
}

void printaVetor(long int n, double* array) {
    for (int i = 0; i < n - 1; i++)
    {
        printf("%.2lf ", array[i]);
    }
    printf("%.2lf\n", array[n - 1]);
}

