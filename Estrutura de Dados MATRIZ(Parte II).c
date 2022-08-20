/*01. Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são da forma:
A[i][j] = 2i + 7j – 2 se i < j
A[i][j] = 3i^2 – 1 se i = j
A[i][j] = 4i^3 + 5j^2 + 1 se i > j*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz [10][10];
	
	for(int linha=0;linha<10;linha++){
		for(int coluna=0;coluna<10;coluna++){
			if(linha<coluna){
				matriz[linha][coluna]=((2*linha)+(7*coluna))-2;
				}else if(linha==coluna){
					matriz[linha][coluna]=((3*linha)*(3*linha))-1;
			}else{
				matriz[linha][coluna]=(((4*linha)*(4*linha)*(4*linha))+((5*coluna)*(5*coluna)))+1;
			}
			printf("[%d]", matriz[linha][coluna]);
		}
	printf("\n");
	}
return 0;
}

/*2. Faça um programa que leia uma matriz de tamanho 5 × 5. 
Calcule e imprima a soma dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz [5][5], soma = 0;
	
	for(int linha=0;linha<5;linha++){
		for (int coluna=0;coluna<5;coluna++){
			printf("Digite os valores dejesados na %dº linha/%dº coluna: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
			if(linha!=coluna && 4-linha!=coluna)
				soma = soma + matriz[linha][coluna];
		}
	printf("\n");
	}
	printf("A soma é: %d", soma);
return 0;
}

/*03. Faça um programa que leia uma matriz de tamanho 5 × 5. 
Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária. 
Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][5], soma1=0, soma2=0;

    for (int linha=0;linha<5;linha++){
        for(int coluna=0;coluna<5;coluna++){
            printf("Insira os valores na %dº linha/%dº coluna: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);

            if(linha==coluna || linha+coluna==4){
                soma1=soma1+matriz[linha][coluna];
            }else{
                soma2=soma2+matriz[linha][coluna];
            }
        }
    printf("\n"); 
    }
    printf("Soma das diagonais: %d", soma1);
    printf("\nSoma do resto: %d", soma2);
    printf("\nDiferença: %d", (soma1-soma2));	
return 0;
}
