#include <stdio.h>
#include <math.h>

int main(){

    float temp;
    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &temp);
    printf("\na temperatura %.3f F em Celsius = %.3f C\n", temp, (5.0*(temp-32.0)/9.0));
    return 0;
}