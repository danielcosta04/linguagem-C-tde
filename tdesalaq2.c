#include <stdio.h>

int main(){

    float salario, soma=0, maior_salario=0;
    int count;

    printf("Digite o salario (valor negativo para encerrar): ");

    while(1){
        scanf("%f", &salario);
        
        if(salario < 0)break;
        soma += salario;

        if(salario > maior_salario){
            maior_salario = salario;
        }
        count++;
    }

    if(count > 0){
        printf("Media de salario do grupo: %.2f\n", soma/count);
        printf("Maior salario: %.2f\n", maior_salario);
    }else{
        printf("Nenhum salario informado.\n");
    }

    return 0;
}