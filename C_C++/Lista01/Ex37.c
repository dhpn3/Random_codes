#include <stdio.h>
#include <math.h>

int main(){

    float preco;
    printf("Digite o valor do produto: R$");
    scanf("%f", &preco);
    printf("Com o desconto de 12%%, o produto custa: R$%.2f", preco-(0.12*preco));
    return 0;
}