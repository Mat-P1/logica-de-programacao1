// 01. Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor [10], par = 0;
	
	for(int contagem = 0;contagem<10;contagem++){
	printf("Insira o %dº valor: ", contagem+1);
	scanf("%d", &valor[contagem]);
	}
	for(int contagem = 0;contagem<10;contagem++){
		if(valor[contagem]%2==0){
			par++;
		}
	}	
	printf("%d", par);
}

// 02. Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
  int valor [10], menor_valor, maior_valor;

	for(int contagem = 0;contagem<10;contagem++){
	printf("Insira o %dº valor: ", contagem+1);
	scanf("%d", &valor[contagem]);
	
	maior_valor = valor[0];
	menor_valor = valor[0];
	}
	
	for(int contagem = 0;contagem<10;contagem++){
		if(valor[contagem>maior_valor]){
			maior_valor = valor[contagem];
			}else if(valor[contagem]<menor_valor){
				menor_valor=valor[contagem];
		}
	}
	printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
}

/* 03. Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor C calculando C = A − B. 
Mostre na tela os dados do vetor C.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
  int vetor_a [10], vetor_b[10], vetor_c[10];
	
	for(int contagem = 0;contagem<10;contagem++){
		printf("Insira o %dº valor de A: ", contagem+1);
		scanf("%d", &vetor_a[contagem]);
	}
	printf("\n");	
	for(int contagem = 0;contagem<10;contagem++){
	printf("Insira o %dº valor de B: ", contagem+1);
	scanf("%d", &vetor_b[contagem]);
	}
	printf("\n");
	for(int contagem = 0;contagem<10;contagem++){
		vetor_c[contagem] = vetor_a[contagem] - vetor_b[contagem];
		printf("%d - %d = %d\n", vetor_a[contagem], vetor_b[contagem], vetor_c[contagem]);
	}
}

// 04. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor [100];
	
	for(int contagem = 0;contagem<100;contagem++){
		vetor[contagem] = contagem;
		if(vetor[contagem]%7==0){
		}else{
			printf("\n%d", vetor[contagem]);
		}			
	}
	return 0;
}
