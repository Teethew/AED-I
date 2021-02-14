#include <stdio.h>
#include <stdlib.h>

long long catalan(long long);

int main() {
    long long n;

    while(1) {
        scanf("%lld", &n);

        if(n < 0) break;

        printf("%lld\n", catalan(n));
    }
    return 0;
}

long long catalan(long long n) {
    if(n == 0) return 1;

    return ((4*n-2)*catalan(n-1))/(n+1);
}