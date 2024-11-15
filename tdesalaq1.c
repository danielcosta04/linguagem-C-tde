#include <stdio.h>

int main(){
    
    int resposta[10];
    int i, sim=0, nao=0;
    int nulo=0;

    //simulando a leitura das respostas.
    for(i=0; i < 10;i++){
        scanf("%d", &resposta[i]);
        if(resposta[i] == 1){
            sim++;
        } 
        else if(resposta[i] == 2){
            nao++;
        }else{
            nulo++;
        }
    }
    printf("Número de pessoas que responderam 'sim': %d\n", sim);
    
    printf("Número de pessoas que responderam 'não': %d\n", nao);
    
    printf("Número de pessoas que responderam 'nulo': %d\n", nulo);

    return 0;
}

