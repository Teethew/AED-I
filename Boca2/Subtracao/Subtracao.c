#include <stdio.h>
#include <stdlib.h>

long long subtracao(long long A, long long B) {
    if(B == 0) return A;
    else
        return(subtracao(A,B-1) - 1);
}

int main() {
    long long A, B;

    scanf("%lld %lld", &A, &B);

    long long resultado = subtracao(A, B);
    printf("%lld\n", resultado);
    
    return 0;
}