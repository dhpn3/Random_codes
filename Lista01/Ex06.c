#include <stdio.h>
#include <math.h>

int main(){

    float temp;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &temp);
    printf("\na temperatura %.3f C em Fahrenheit = %.3f F\n", temp, (temp*(9.0/5.0)+32.0));
    return 0;
}