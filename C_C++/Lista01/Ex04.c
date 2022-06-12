#include <stdio.h>
#include <math.h>

int main(){

    float n1;
    printf("Digite um numero real (float): ");
    scanf("%f", &n1);
    printf("\no quadrado desse numero = %f", pow(n1,2));
    return 0;
}