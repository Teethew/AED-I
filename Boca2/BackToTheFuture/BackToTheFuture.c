#include <stdio.h>
#include <stdlib.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

Data avancaPraData(Data, long);
Data voltaPraData(Data, long);

int main() {
    int n;

    scanf("%d", &n);

    Data* data = (Data*) malloc(sizeof(Data)*n);

    for(int i = 0; i < n; i++){
        long numeroComandos;
        long diaMais = 0, diaMenos = 0;

        scanf(" %d", &data[i].dia);
        scanf(" %d", &data[i].mes);
        scanf(" %d", &data[i].ano);
        scanf(" %ld", &numeroComandos);

        char* comandos = (char*) malloc(sizeof(char)*numeroComandos);

        for(int k = 0; k < numeroComandos; k++) {
            scanf(" %c", (comandos+k));
        }

        for(int j = 0; j < numeroComandos; j++){
            if(comandos[j] == '>'){
                diaMais++;
            } else if (comandos[j] == '<') {
                diaMenos++;
            }
        }

        if(diaMais > diaMenos){
            diaMais -= diaMenos;
            data[i] = avancaPraData(data[i], diaMais);
        }
        else {
            diaMenos -= diaMais;
            data[i] = voltaPraData(data[i], diaMenos);
        }
        
        printf("%d/%d/%d\n", data[i].dia, data[i].mes, data[i].ano);
        free(comandos);
    }

    return 0;
}

Data avancaPraData(Data data, long diaMais){
    if(diaMais == 0) return data;

    for(int i = 0; i < diaMais; i++){
        short bissexto;

        if(data.ano % 400 == 0) bissexto = 1;
        else if(data.ano % 4 == 0 && data.ano % 100 != 0) bissexto = 1;
        else bissexto = 0;

        switch(data.mes) {
            case 1:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 2:
                if(bissexto) {
                    if(data.dia == 29){
                        data.dia -= 28;
                        data.mes += 1;
                    } else data.dia++;
                }
                else {
                    if(data.dia == 28){
                        data.dia -= 27;
                        data.mes += 1;
                    } else data.dia++;
                }
                break;
            case 3:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 4:
                if(data.dia == 30){
                    data.dia -= 29;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 5:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 6:
                if(data.dia == 30){
                    data.dia -= 29;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 7:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 8:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 9:
                if(data.dia == 30){
                    data.dia -= 29;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 10:
                if(data.dia == 31){
                    data.dia -= 30;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 11:
                if(data.dia == 30){
                    data.dia -= 29;
                    data.mes += 1;
                } else data.dia++;
                break;
            case 12:
                if(data.dia == 31 && data.ano < 2500){
                    data.dia -= 30;
                    data.mes -= 11;
                    data.ano += 1;
                } else if(data.dia == 31 && data.ano >= 2500){
                    ;
                } else data.dia++;
                break;
        }
    }
    return data;
}

Data voltaPraData(Data data, long diaMenos) {
    if(diaMenos == 0) return data;

    for(int i = 0; i < diaMenos; i++){
        short bissexto;

        if(data.ano % 400 == 0) bissexto = 1;
        else if(data.ano % 4 == 0 && data.ano % 100 != 0) bissexto = 1;
        else bissexto = 0;

        switch(data.mes) {
            case 1:
                if(data.dia == 1 && data.ano > 1600){
                    data.dia += 30;
                    data.mes += 11;
                    data.ano -= 1;
                } else if(data.dia == 1 && data.ano <= 1600){
                    ;
                } else data.dia--;
                break;
            case 2:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 3:
                if(bissexto) {
                    if(data.dia == 1){
                        data.dia += 28;
                        data.mes -= 1;
                    } else data.dia--;
                }
                else {
                    if(data.dia == 1){
                        data.dia += 27;
                        data.mes -= 1;
                    } else data.dia--;
                }
                break;
            case 4:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 5:
                if(data.dia == 1){
                    data.dia += 29;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 6:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 7:
                if(data.dia == 1){
                    data.dia += 29;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 8:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 9:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 10:
                if(data.dia == 1){
                    data.dia += 29;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 11:
                if(data.dia == 1){
                    data.dia += 30;
                    data.mes -= 1;
                } else data.dia--;
                break;
            case 12:
                if(data.dia == 1){
                    data.dia += 29;
                    data.mes -= 1;
                } else data.dia--;
                break;
        }
    }
    return data;
}