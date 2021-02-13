#include <stdio.h>

short isAnoBissexto(int ano);

int main() {
    int DIA, MES, ANO;
    short bissexto;

    scanf("%d %d %d", &DIA, &MES, &ANO);
    bissexto = isAnoBissexto(ANO);

    switch(MES) {
        case 1:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES+11, ANO-1) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 2:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 3:
            if(bissexto)
                DIA == 1 ? printf("%d %d %d\n", DIA+28, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            else
                DIA == 1 ? printf("%d %d %d\n", DIA+27, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 4:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 5:
            DIA == 1 ? printf("%d %d %d\n", DIA+29, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 6:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 7:
            DIA == 1 ? printf("%d %d %d\n", DIA+29, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 8:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 9:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 10:
            DIA == 1 ? printf("%d %d %d\n", DIA+29, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 11:
            DIA == 1 ? printf("%d %d %d\n", DIA+30, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
        case 12:
            DIA == 1 ? printf("%d %d %d\n", DIA+29, MES-1, ANO) : printf("%d %d %d\n", DIA-1, MES, ANO);
            break;
    }

    return 0;
}

short isAnoBissexto(int ano){
    if(ano % 400 == 0) return(1);
    else if(ano % 4 == 0 && ano % 100 != 0) return(1);
    else return(0);
}