/*01. Desenvolver um algoritmo que efetue a soma de todos os números ímpares que são múltiplos de
três e que se encontram no conjunto dos números de 1 até 500.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int contagem = 1, soma;
    
    while(contagem <= 500){
        if(contagem%2==1 && contagem%3==0){
            soma = soma+contagem;
        }
     contagem++;
    }
    printf("Sua soma é: %d", soma);
}

/*02. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular emostrar:
    a. A menor altura do grupo;
    b. A maior altura do grupo;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int contagem=1;
    float altura=0, maior_altura=0, menor_altura=5;
    
    while(contagem<=15){
        printf("Insira sua altura: ");
        scanf("%f", &altura);
        
        if(altura>maior_altura){
            maior_altura = altura;
            }else if(altura<menor_altura){
                menor_altura = altura;
            }
    contagem++;
    }
    printf("\nMaior altura: %.2f", maior_altura);
    printf("\nMenor altura: %.2f", menor_altura);
}

// 03. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int contagem=100;
    
    while(contagem<=200){
        
        if(contagem%2==1){
            printf("\n%d", contagem);
        }
    contagem++;
    }
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

    while(contagem<=valor){
        x = x*contagem;  
    contagem++;
    }

    printf("Resultado: %d", x);
}

/*05. Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e calcule a tabuada de N. 
Mostre a tabuada na forma: 0 x N = 0, 1 x N = 1N, 2 x N = 2N, ..., 10 x N = 10N.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 0, y, multiplica;

    printf("Tábuada");
    printf("\nEscreva um valor entre 1 e 10: ");
    scanf("%d", &y);

    while(x <= 10){
        multiplica = y*x;
        printf("\n%d x %d = %d", x, y, multiplica);
        x = x + 1;
    }
}

// 06. Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int contagem=1, valor, maior_valor, menor_valor;
    
    while(contagem<=15){
        printf("Insira um valor: ");
        scanf("%d", &valor);
        
        if(valor>maior_valor){
            maior_valor = valor;
            }else if(valor<menor_valor){
                menor_valor = valor;
            }
    contagem = contagem + 1;
    }
    printf("\nMaior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);
}
