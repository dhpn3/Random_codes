//Djhonathan Paiva, junho/2022

#include <stdio.h>

int main (){
	
	int matriz[2][3] = {{0}};
    int vetor[2] = {0};
    int i = 0;
    int j = 0;

    // Leitura
    for ( i = 0; i < 2; i++ ){
        for ( j = 0; j < 3; j++ ){
            printf("[%d][%d] Valor: ", i, j );
            scanf(" %d", &matriz[i][j] );
        }
    }
        
    printf("\nPrimeira linha da matriz: ");
	for(i=0; i==0; i++){
		for(j=0; j<3; j++){
		printf("%d ", matriz[i][j]);
		}
	}
	
	printf("\nSegunda linha da matriz: ");
	for(i=1; i==1; i++){
		for(j=0; j<3; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	printf("\n");

    // Soma
    for ( i = 0; i < 2; i++ ){
        for ( j = 0; j < 3; j++ ){
            vetor[i] += matriz[i][j];
    	}
    }

    // Listar somas
    for ( i = 0; i < 2; i++ ){
        printf("[%d] Linha: %d\n", i, vetor[i] );
    }
	
	return 0;
}