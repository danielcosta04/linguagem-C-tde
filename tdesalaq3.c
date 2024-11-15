#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float celsius, fahrenheint;

    printf("Tabela de conversão de Celsius para Fahrenheit: \n");

    for(celsius = 0; celsius < 100; celsius++){
        fahrenheint = (9.0/5.0) * celsius + 32;
        printf("%.0fºC = %.2fºF\n", celsius, fahrenheint);
    }

    return 0;
}
