/* 
Djhonathan Paiva
Calculadora Basica
06/04/22
*/

#include <stdio.h>
#include <stdlib.h>

void soma(float n1, float n2){
    printf("%.3f",n1+n2);
    printf("\n");
  }  
void sub(float n1, float n2){
    printf("%.3f",n1-n2);
    printf("\n");
  }
void mult(float n1, float n2){
    printf("%.3f", n1*n2);
    printf("\n");
  }
void divi(float n1, float n2){
    printf("%.3f",n1/n2);
    printf("\n");
  }

int main(){

float n1, n2;
int operacao;

    do{
        printf("\n\tCalculadora\n");
        printf("0 - sair\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
        printf("\n\tescolha uma operacao: ");
        scanf("%d", &operacao);
        
        switch(operacao){
            case 0:
                printf("Saindo...\n");
                system("pause");
                return 0;
            case 1:
                printf("\nn1: ");  
                scanf("%f", &n1);
                printf("n2: ");
                scanf("%f", &n2);
                soma(n1, n2);
                // o melhor seria ter uma funcao para setar os numeros, mas usaria ponteiros
                break;
            case 2:
                printf("\nn1: ");  
                scanf("%f", &n1);
                printf("n2: ");
                scanf("%f", &n2);
                sub(n1, n2);
                break;
            case 3:
                printf("\nn1: ");  
                scanf("%f", &n1);
                printf("n2: ");
                scanf("%f", &n2);
                mult(n1, n2);
                break;
            case 4:
                printf("\nn1: ");  
                scanf("%f", &n1);
                printf("n2: ");
                scanf("%f", &n2);
                div(n1, n2);
                break;
            default:
                printf("\nNenhuma operacao. Tente novamente...\n");
                return main();
        }
    }while(operacao!=0);
    
return 0;
}
