#include <stdio.h>

int main() {
    /*
    Entrada
        O programa terá apenas um caso de teste.
        O caso de teste é composto por dois valores inteiros, A e B, representando o dividendo e o
        divisor, respectivamente e separados por um espaço em branco.
    Saída
        Seu programa gera apenas uma linha de saída, contendo dois valores inteiros separados por
        um espaço em branco, sendo o primeiro valor a divisão inteira entre A e B. Já o segundo
        número é o resto da divisão inteira de A por B. Não se esqueça de quebrar uma linha após a
        impressão dos valores.
    */
    long int A, B, divisao, resto;
    scanf("%ld", &A);
    scanf("%ld", &B);

    divisao = A/B;
    resto = A%B;

    printf("%ld %ld\n", divisao, resto);

    return 0;
}