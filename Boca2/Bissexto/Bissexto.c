#include <stdio.h>

char* isAnoBissexto(long ano);

int main() {
    unsigned long ano;

    scanf("%ld", &ano);
    printf("%s\n",isAnoBissexto(ano));

    return 0;
}

char* isAnoBissexto(long ano){
    if(ano % 400 == 0) return("ANO BISSEXTO");
    else if(ano % 4 == 0 && ano % 100 != 0) return("ANO BISSEXTO");
    else return("ANO NAO BISSEXTO");
}