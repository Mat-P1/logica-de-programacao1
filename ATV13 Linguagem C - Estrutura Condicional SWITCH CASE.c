/* 01. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível. 
sabendo-se que um carro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro. UTILIZE O SWITCH CASE*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float gasto, quilometros;
	int opcao;
	
	printf("---Cálculo do gasto de gasolina---");
	printf("\nQuantos quilómetros foram percorridos?: ");
	scanf("%f", &quilometros);
	
	printf("---CARRO UTILIZADO---");
	printf("\n(1) Carro A [12km por litro]\n(2) Carro B [9km por litro]\n(3) Carro C [8km por litro] \n-> ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			gasto = quilometros/12;
			printf("Litros gastos no percuso: %.1f litros", gasto);
		break;
		case 2:
			gasto = quilometros/9;
			printf("Litros gastos no percuso: %.1f litros", gasto);
		break;
		case 3:
			gasto = quilometros/8;
			printf("Litros gastos no percuso: %.1f litros", gasto);
		break;
	}
}

/* 02. Crie um programa que leia uma letra e pergunte ao usuário se a letra deverá ser convertida para maiúscula ou minúscula.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	int opcao;
	
	printf("---Conversão de Letras---");
	printf("\nDigite a letra: ");
	scanf("%c", &letra);
	
	char ma = toupper(letra);
	char mi = tolower(letra);
	
	printf("---Tipo de conversão---");
	printf("\n(1) Maiúscula\n(2) Minúscula\n-> ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nMaiúscula: %c \n", ma);
		break;
		case 2:
			printf("\nMinúscula: %c \n", mi);
		break;
	}
}

/* 03. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar 
o prato, a sobremesa, e bebida conforme a tabela a seguir
Prato                                   Sobremesa                                Bebida
Vegetariano 180cal                      Abacaxi 75cal                            Chá 20cal 
Peixe 230cal                            Sorvete diet 110cal                      Suco de laranja 70cal 
Frango 250cal                           Mousse diet 170cal                       Suco de melão 100cal 
Carne 350cal                            Mousse chocolate 200cal                  Refrigerante diet 65cal*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	
    int calorias = 0, prato, sobremesa, bebida;

    printf("---SAÚDE SENAI---");
    printf("\nCálculo de Calorias\n---Menu---");
    printf("\nPrato principal:");
	
	printf("\n(1) Vegetariano [180cal]\n(2) Peixe [230cal]\n(3) Frango [250cal]\n(4) Carne [350cal]\n-> ");
	scanf("%d", &prato);
    
	printf("\nSobremesa:");
	printf("\n(1) Abacaxi [75cal]\n(2) Sorvete diet [110cal]\n(3) Mousse diet [170cal]\n(4) Mousse chocolate [200cal]\n-> ");
	scanf("%d", &sobremesa);
   
	printf("\nBebida:");
	printf("\n(1) Chá [20cal]\n(2) Suco de laranja [70cal]\n(3) Suco de melão [100cal]\n(4) Refrigerante diet [65cal]\n-> ");
	scanf("%d", &bebida);
    
    switch (prato){
        case 1:
            calorias += 180;
        break;
        case 2:
            calorias += 230;
        break;
        case 3:
            calorias += 250;
        break;
        case 4:
            calorias += 350;
        break;
    }

    switch (sobremesa){
        case 1:
            calorias += 75;
        break;
        case 2:
            calorias += 110;
        break;
        case 3:
            calorias += 170;
        break;
        case 4: 
            calorias += 200;
        break;
    }

    switch (bebida){
        case 1:
            calorias += 20;
        break;
        case 2:
            calorias += 70;
        break;
        case 3:
            calorias += 100;
        break;
        case 4:
            calorias += 65;
        break;
    }
    printf("---SAÚDE SENAI---");
    printf("\nTotal de calorias consumidas: %dcal", calorias);
}
