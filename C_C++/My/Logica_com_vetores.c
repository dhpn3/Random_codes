/*
Autor: Djhonathan Paiva
        crie um programa que:
- leia vários números inteiros e positivos (n>0)
- imprima o produto dos números ímpares (n%2 != 0 && -> produto)
- imprima a soma dos números pares (n%2 == 0 && -> soma)
- encerrar o programa quando o número for negativo ou zero
*/

#include <stdio.h>
#include <stdlib.h>

void somaPares(int vetPAR[], int j)
{
    int aux = 0;

    printf("\ntamanho do vetor PAR: %d", j);
    printf("\nvetor de numeros pares:\n[");
    for (int i = 0; i < j; i++)
    {
        printf("%d, ", vetPAR[i]);
        aux = aux + vetPAR[i];
    }
    printf("\b\b]\na soma dos numeros pares eh: %d\n", aux);
}

void produtoImpares(int vetIMPAR[], int k)
{
    int aux = 1;

    printf("\ntamanho do vetor IMPAR: %d", k);
    printf("\nvetor de numeros impares:\n[");
    for (int i = 0; i < k; i++)
    {
        printf("%d, ", vetIMPAR[i]);
        aux = aux * vetIMPAR[i];
    }

    printf("\b\b]\no produto dos numeros impares eh: %d\n", aux);
}

int main()
{
    int i, j, k, count, aux;
    printf("comecando!\n");
    printf("quantos numeros?: ");
    scanf("%d", &count);

    int n[count];
    int vetPAR[count], vetIMPAR[count];
    j = 0;
    k = 0;
    for (i = 0; i < count; i++)
    {
        printf("\ndigite o %d numero: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] > 0)
        {
            if (n[i] % 2 == 0)
            {
                if (vetPAR[i] % 2 == 0)
                {
                    printf("\nnumero PAR! Salvando no vetor par...\n");
                    vetPAR[j] = n[i];
                    printf("numero salvo: %d\n", vetPAR[j]);
                    j++;
                }
            }
            else
            {
                printf("\nnumero IMPAR! Salvando no vetor impar...\n");
                vetIMPAR[k] = n[i];
                printf("numero salvo: %d\n", vetIMPAR[k]);
                k++;
            }
        }
        else
        {
            printf("numero negativo! fim! \n");
            return 0;
        }
    }

    printf("\nvetPAR:\n");
    i = 0;
    for (i = 0; i < j; i++)
    {
        printf("index[%d]: %d\n", i, vetPAR[i]);
    }

    printf("\nvetIMPAR:\n");
    i = 0;
    for (i = 0; i < k; i++)
    {
        printf("index[%d]: %d\n", i, vetIMPAR[i]);
    }

    somaPares(vetPAR, j);
    produtoImpares(vetIMPAR, k);
    printf("\nfim");
    return 0;
}