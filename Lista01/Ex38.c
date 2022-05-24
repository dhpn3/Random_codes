#include <stdio.h>
#include <math.h>

int main(){

    float salario;
    printf("Digite o salario: R$");
    scanf("%f", &salario);
    printf("Com o acrescimo de 25%%, o salario aumentou para: R$%.2f", salario+(0.25*salario));
    return 0;
}