#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Digite tres numeros inteiros:\n");
    printf("\n\tn1: ");
    scanf("%d", &n1);
    printf("\n\tn2: ");
    scanf("%d", &n2);
    printf("\n\tn3: ");
    scanf("%d", &n3);

    printf("\n A soma entre %d+%d+%d = %d", n1, n2, n3, n1+n2+n3);
    return 0;
}