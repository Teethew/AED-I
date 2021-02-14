#include <stdio.h>
#include <stdlib.h>

long long soma(long long A, long long B) {
    if(B == 0) return A;
    else
        return(soma(A,B-1) + 1);
}

int main() {
// Faça um programa que use uma função recursiva para efetuar o cálculo da adição.
// Entrada
// O programa receberá apenas uma entrada.
// Consistindo de um par de valores inteiros separados por um espaço em branco.
// Sendo 0 ≤ A ≤ 231-1 e B, 0 < B ≤ 218-1, onde A e B representam as parcelas da operação.
// • Dica: Use a variável B para controle do passo recursivo.
// Saída
// A saída consiste apenas uma linha, contendo o resultado da soma de A por B.
// Salte uma linha após a resposta.
    long long A, B;

    scanf("%lld %lld", &A, &B);

    long long resultado = soma(A, B);
    printf("%lld\n", resultado);
    
    return 0;
}