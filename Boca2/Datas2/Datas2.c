#include <stdio.h>

short isAnoBissexto(long long ano);

short isAnoValido(long long ano);

void main() {

    long long DIA, MES, ANO;
    short bissexto;
    scanf("%lld %lld %lld", &DIA, &MES, &ANO);

    if(!isAnoValido(ANO)){
        printf("DATA INVALIDA\n");
        return 0;
    }

    bissexto = isAnoBissexto(ANO);

    switch(MES) {
        case 1:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 2:
            if(bissexto)
                1 <= DIA && DIA <= 29 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            else
                1 <= DIA && DIA <= 28 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 3:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 4:
            1 <= DIA && DIA <= 30 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 5:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 6:
            1 <= DIA && DIA <= 30 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 7:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 8:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 9:
            1 <= DIA && DIA <= 30 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 10:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 11:
            1 <= DIA && DIA <= 30 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        case 12:
            1 <= DIA && DIA <= 31 ? printf("DATA VALIDA\n") : printf("DATA INVALIDA\n");
            break;
        default:
            printf("DATA INVALIDA\n");
            break;
    }

    return 0;
}

short isAnoBissexto(long long ano){
    if(ano % 400 == 0) return(1);
    else if(ano % 4 == 0 && ano % 100 != 0) return(1);
    else return(0);
}

short isAnoValido(long long ano){
    return ano >= 1582 ? 1 : 0;
}