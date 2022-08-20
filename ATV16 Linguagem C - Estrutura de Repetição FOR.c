// Realizar a resolução da ATV14 utilizando estrutura de repetição FOR.

/*01. Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
três e que se encontram no conjunto dos números de 1 até 500.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int soma;
    
	for(int contagem = 1;contagem <= 500;contagem++){
        if(contagem%2==1 && contagem%3==0){
            soma = soma+contagem;
        }
    }
    printf("Sua soma é: %d", soma);
}

/*02. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular emostrar :
    a. A menor altura do grupo;
    b. A maior altura do grupo;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float altura=0, maior_altura=0, menor_altura=5;
    
    for(int contagem=1;contagem<=15;contagem++){
        printf("Insira sua altura: ");
        scanf("%f", &altura);
        
        if(altura>maior_altura){
            maior_altura = altura;
            }else if(altura<menor_altura){
                menor_altura = altura;
            }
    }
    printf("\nMaior altura: %.2f", maior_altura);
    printf("\nMenor altura: %.2f", menor_altura);
return 0;
}

// 03. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    for(int contagem=100;contagem<=200;contagem++){
        
        if(contagem%2==1){
            printf("\n%d", contagem);
        }
    }
    return 0;
}

// 04. Escreva um algoritmo que leia um valor inicial A e imprima a seqüência de valores do cálculo de A! e o seu resultado. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 1, valor, contagem = 1;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(;contagem<=valor;contagem++){
        x = x*contagem;  
    }
    printf("Resultado: %d", x);
return 0;
}

/* 05. Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N. 
Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int y, multiplica;

    printf("Tábuada");
    printf("\nEscreva um valor entre 1 e 10: ");
    scanf("%d", &y);

    for(int x = 0;x <= 10;x++){
		multiplica = y*x;
        printf("\n%d x %d = %d", x, y, multiplica);					
		}
return 0;
}

//06. Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int valor, maior_valor, menor_valor;
    
    for(int contagem=1;contagem<=15;contagem++){
        printf("Insira um valor: ");
        scanf("%d", &valor);
        
        if(valor>maior_valor){
            maior_valor = valor;
            }else if(valor<menor_valor){
                menor_valor = valor;
            }
    }
    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
return 0;
}
