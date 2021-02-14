#include <stdio.h>
#include <stdlib.h>

long long produto(long long A, long long B) {
    if(B == 0) return 0;
    if(B == 1) return A;
    else
        return(produto(A,B-1) + A);
}

int main() {
    long long A, B;

    scanf("%lld %lld", &A, &B);

    long long resultado = produto(A, B);
    printf("%lld\n", resultado);

    return 0;
}