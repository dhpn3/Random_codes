#include <stdio.h>

int main(){
	
	int matrizA[10][10];
	int linha, coluna;
	int tamanho;

	/*
	// criando matriz de inteiros a partir da entrada do usuário
	printf("\n\tPrograma para ler uma matriz do usuario e printar o que foi salvo\n");
	printf("\nMatriz quadrada");
	printf("\nDigite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	
	printf("\nDigite os elementos da matriz:\n");
	for(linha=0; linha<tamanho; linha++){
		for(coluna = 0; coluna<tamanho ; coluna++){
			printf("\ndigite o elemento [%d]x[%d]: ", linha, coluna);
			scanf("%d", &matrizA[linha][coluna]);
		}
	}
	
	printf("\nMatriz preenchida:\n");
	for(linha = 0; linha<tamanho; linha++){
		for(coluna = 0; coluna<tamanho; coluna++){
			printf("%d ", matrizA[linha][coluna]);
		}
		printf("\n");
	}
	
	*/

	/*
	// criando matriz a partir da inicialização do próprio dono
	int matriz[2][3] = {{1, 2, 3}, {10, 20, 30}};
	int linha, coluna;

	printf("\nDisplay da matriz salva: \n");
	for(linha = 0; linha<2; linha++){
		for(coluna = 0; coluna<3; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	*/

	/*
	// criando  matriz de char a partir da entrada do usuário

	printf("\n\tPrograma para ler uma matriz do tipo char do usuario e printar o que foi salvo\n");
	printf("\nDigite o tamanho da matriz: ");
	scanf("%d", &tamanho);
	fflush(stdin);
	
	printf("\nDigite os elementos da matriz:\n");
	for(linha=0; linha<tamanho; linha++){
		for(coluna = 0; coluna<tamanho ; coluna++){
			printf("Digite o elemento [%d]x[%d]: ", linha, coluna);
			scanf("%c", &matrizA[linha][coluna]);
			fflush(stdin);
		}
	}
	
	printf("\nMatriz preenchida:\n");
	for(linha = 0; linha<tamanho; linha++){
		for(coluna = 0; coluna<tamanho; coluna++){
			printf("%c", matrizA[linha][coluna]);
		}
		printf("\n");
	}
	
	*/
	
	/*
	// criando matriz de char a partir da inicialização do próprio dono

	//	char matriz[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
	//	int linha, coluna;
	//
	//	printf("\nDisplay da matriz salva: \n");
	//	for(linha = 0; linha<2; linha++){
	//		for(coluna = 0; coluna<3; coluna++){
	//			printf("%c ", matriz[linha][coluna]);
	//		}
	//		printf("\n");
	//	}
	*/

	
	printf("\nFim do programa");
	return 0;
}