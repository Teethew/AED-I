#include <stdio.h>

int N = 8;

//Isso eu fiz no ex anterior, passou nos testes do juiz dele, então o erro n ta aqui mt provavelmente!
//essa funcao verifica que se dada 2 cordenadas (i1, j1) (i2,j2), as rainhas dessas se atacam,
//se elas se atacam, retorna 1, senão retorna 0.
int atacam(int i1, int j1, int i2, int j2) {
    if(i1 == i2 || j1 == j2){
        return 1;
    }
    if((i1 + j1) == (i2 + j2) || (i1 - j1) == (i2 - j2)){
        return 1;
    }  
    return 0;
}

int rainhas(int n, int v[]){
    if(n == 0){
        //imprime a solução que achar (não chega nem aqui)
        for(int k = 0; k < N; k++)
            printf("%d ", v[k]);
        printf("\n");
        //informa a propria função (para que ela retorne 1 la embaixo) que achou uma solução
        return 1;
    }else{
        for(int j = 0; j < N; j++){
            //coloco a rainha da linha n na coluna j
            v[n] = j;
            //variavel para verificar se alguma hora da problema essa rainha que eu coloquei
            int resultadoParcial = 0;
            //preciso olhar pras rapinhas anteriores a essa atual
            for(int anteriores = N-n; anteriores >= 0 ; anteriores --){
                resultadoParcial = atacam(n, v[n-1], anteriores, v[anteriores]);
                //se achar uma que ataque, para de olhar pras anteriores
                if(resultadoParcial == 1){
                    break;
                }
            }
            //se passou por tudo e n achou ataque, vai pra proxima rainha
            if(resultadoParcial == 0){
                int r = rainhas(n-1, v);
                if(r == 1) return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n = N-1, achou;
    int v[8] = {0};
    achou = rainhas(n, v);
    printf("%d", achou);
    return 0;
}