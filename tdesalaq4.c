#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int tempo = 0;
    float massa_inicial, massa_atual;

    printf("Digite massa inicial do material (em gramas): ");
    scanf("%f", &massa_inicial);
    massa_atual = massa_inicial;

    while(massa_atual >= 0.5){
        massa_atual *= 0.9;
        tempo += 60;
    }

    printf("Massa inicial: %.2f g\n", massa_inicial);
    printf("Massa final: %.2f g\n", massa_atual);
    printf("O tempo necessário: %d min\n", tempo / 60);



    return 0;
}