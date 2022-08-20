/* 01. Faça um programa que declare uma matriz de tamanho 5 × 5. 
Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[5][5];
	
	for(int linha = 0;linha<5;linha++){
		for(int coluna = 0;coluna<5;coluna++){
			if(linha == coluna){
				matriz[linha][coluna]=1;
			}else{
				matriz[linha][coluna]=0;
			}
		}
	}
	for(int linha = 0;linha<5;linha++){
		for(int coluna = 0;coluna<5;coluna++){
			printf("{%d}", matriz[linha][coluna]);
		}
		printf("\n");
	}
return 0;
}

// 02. Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz [4][4], contagem = 0;
	
	for(int linha=0;linha<4;linha++){
		for(int coluna=0;coluna<4;coluna++){
			printf("Insira um valor na %dº linha/%dº coluna: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	for(int linha=0;linha<4;linha++){
        for(int coluna=0;coluna<4;coluna++)
            if(matriz[linha][coluna]>10){
                contagem++;
        }
    }
    printf("\nExistem %d números maiores que 10", contagem);
return 0;
}

// 03. Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], soma = 0;
	
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			printf("Digite os valores desejados na %dº linha/%dº coluna: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			if(linha==coluna)
				soma = soma + matriz[linha][coluna];
		}
	}
	printf("O valor da soma dos números inteiros da diagonal principal é: %d", soma);
return 0;
}

// 04. Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundária.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], soma = 0;
	
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			printf("Digite os valores desejados na %dº linha/%dº coluna: ", linha+1, coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	for(int linha=0;linha<3;linha++){
		for(int coluna=0;coluna<3;coluna++){
			if(linha+coluna==2)
				soma = soma + matriz[linha][coluna];
		}
	}
	printf("O valor da soma dos números inteiros da diagonal secundária é: %d", soma);
return 0;
}
