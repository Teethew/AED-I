#include <stdio.h>

struct tRacional {
    long long numerador;
    long long denominador;
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
                if(resultado.denominador < 0){
                    resultado.denominador = 0 - resultado.denominador;
                    resultado.numerador = 0 - resultado.numerador;
                }
                printf("%lld %lld\n", resultado.numerador, resultado.denominador);
                break;
            case '-':
                resultado = reduz(soma(Q1, negativo(Q2)));
                if(resultado.denominador < 0){
                    resultado.denominador = 0 - resultado.denominador;
                    resultado.numerador = 0 - resultado.numerador;
                }
                printf("%lld %lld\n", resultado.numerador, resultado.denominador);
                break;
            case '*':
                resultado = reduz(mult(Q1, Q2));
                if(resultado.denominador < 0){
                    resultado.denominador = 0 - resultado.denominador;
                    resultado.numerador = 0 - resultado.numerador;
                }
                printf("%lld %lld\n", resultado.numerador, resultado.denominador);
                break;
            case '/':
                resultado = reduz(div(Q1, Q2));
                if(resultado.denominador < 0){
                    resultado.denominador = 0 - resultado.denominador;
                    resultado.numerador = 0 - resultado.numerador;
                }
                printf("%lld %lld\n", resultado.numerador, resultado.denominador);
                break;
        }
    }

    return 0;
}

struct tRacional racional(int num, int den) {
    struct tRacional result;
    result.numerador = (long long) num;
    result.denominador = (long long) den;
    return result;
}
struct tRacional negativo(struct tRacional Q) {
    struct tRacional result = Q;
    result.numerador = 0 - Q.numerador;
    return result;
}
struct tRacional soma(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numerador = Q1.numerador*Q2.denominador + Q2.numerador*Q1.denominador;
    result.denominador = Q1.denominador * Q2.denominador;
    return result;
} 
struct tRacional mult(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numerador = Q1.numerador * Q2.numerador;
    result.denominador = Q1.denominador * Q2.denominador;
    return result;
}
struct tRacional div(struct tRacional Q1, struct tRacional Q2) {
    struct tRacional result;
    result.numerador = Q1.numerador * Q2.denominador;
    result.denominador = Q1.denominador * Q2.numerador;
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
    long long maiorDivisor = mdc(result.numerador, result.denominador);

    result.numerador /= maiorDivisor;
    result.denominador /= maiorDivisor;

    return result;
}