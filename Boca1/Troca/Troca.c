#include <stdio.h>

int main() {
    long A;
    long B;
    scanf("%ld", &A);
    scanf("%ld", &B);
    long temp = A;
    A = B;
    B = temp;

    printf("%ld %ld\n", A, B);
}