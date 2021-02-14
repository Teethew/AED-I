#include <stdio.h>

struct tRacional {
    long long numer;
    long long denom;
};

struct tRacional racional(int, int);
struct tRacional negativo(struct tRacional); 
struct tRacional soma(struct tRacional, struct tRacional); 
struct tRacional mult(struct tRacional, struct tRacional); 
struct tRacional div(struct tRacional, struct tRacional);
long long mdc(long long numerador, long long denominador); 
struct tRacional reduz(struct tRacional);

int main()
{
    int n1, n2, d1, d2;
    char operacao;
    while(scanf("%d %d %c %d %d", &n1, &d1, &operacao, &n2, &d2) != EOF) {
        struct tRacional Q1 = racional(n1, d1);
        struct tRacional Q2 = racional(n2, d2);
        Q1 = reduz(Q1);
        Q2 = reduz(Q2);

        struct tRacional resultado;
        switch (operacao) {
            case '+':
                resultado = reduz(soma(Q1, Q2));
                if(resultado.denom < 0){
                    resultado.denom = 0 - resultado.denom;
                    resultado.numer = 0 - resultado.numer;
                }
                printf("%lld %lld\n", resultado.numer, resultado.denom);
                break;
            case '-':
                resultado = reduz(soma(Q1, negativo(Q2)));
                if(resultado.denom < 0){
                    resultado.denom = 0 - resultado.denom;
                    resultado.numer = 0 - resultado.numer;
                }
                printf("%lld %lld\n", resultado.numer, resultado.denom);
                break;
            case '*':
                resultado = reduz(mult(Q1, Q2));
                if(resultado.denom < 0){
                    resultado.denom = 0 - resultado.denom;
                    resultado.numer = 0 - resultado.numer;
                }
                printf("%lld %lld\n", resultado.numer, resultado.denom);
                break;
            case '/':
                resultado = reduz(div(Q1, Q2));
                if(resultado.denom < 0){
                    resultado.denom = 0 - resultado.denom;
                    resultado.numer = 0 - resultado.numer;
                }
                printf("%lld %lld\n", resultado.numer, resultado.denom);
                break;
        }
    }

    return 0;
}

struct tRacional racional(int num, int den) {
    struct tRacional result;
    result.numer = (long long) num;
    result.denom = (long long) den;
    return result;
}
struct tRacional negativo(struct tRacional Q) {
    struct tRacional result = Q;
    result.numer = 0 - Q.numer;
    return result;
}
struct tRacional soma(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numer = Q1.numer*Q2.denom + Q2.numer*Q1.denom;
    result.denom = Q1.denom * Q2.denom;
    return result;
} 
struct tRacional mult(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numer = Q1.numer * Q2.numer;
    result.denom = Q1.denom * Q2.denom;
    return result;
}
struct tRacional div(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numer = Q1.numer * Q2.denom;
    result.denom = Q1.denom * Q2.numer;
    return result;
} 
long long mdc(long long numerador, long long denominador) {
    if(numerador%denominador == 0)
        return denominador;
    else
        return mdc(denominador, numerador%denominador);
}
struct tRacional reduz(struct tRacional Q) {
    struct tRacional result = Q;
    long long maiorDivisor = mdc(result.numer, result.denom);

    result.numer /= maiorDivisor;
    result.denom /= maiorDivisor;

    return result;
}