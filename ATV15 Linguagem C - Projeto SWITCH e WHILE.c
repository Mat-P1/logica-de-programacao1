/* 01. Faça um programa que apresente o menu de opções a seguir:  
Menu de opções:  
1. Média aritmética
2. Média ponderada
3. Sair  
Digite a opção desejada:
Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
Na opção 3: sair do programa.  
Verifique a possibilidade de opção inválida, mostrando uma mensagem. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int selecao = 0, peso1, peso2, peso3, ano, turma;
	float nota1, nota2, nota3, media_aritimetica, media_ponderada;
  char nome [20];
	
	while(selecao!=3){
		printf("\n---SENAI---\nCÁLCULADORA DE NOTAS");
		printf("\nSelecione o tipo de média\n(1) Média aritmética\n(2) Média ponderada\n(3) Sair\n-> ");
		scanf("%d", &selecao);
		
		printf("\nNome do aluno: ");
    scanf("%s", &nome);
		printf("\nAno: ");
		scanf("%d", &ano);
		printf("\nTurma: ");
		scanf("%d", &turma);
		
		switch (selecao) {
			case 1:
				printf("Primeira nota: ");
				scanf("%f", &nota1);
				printf("\nSegunda nota: ");
				scanf("%f", &nota2);
				
				media_aritimetica = (nota1+nota2)/2;

        printf("---SENAI---");
				printf("\nAluno: %s\nAno: %dº\tTurma: %d", nome, ano, turma);
        printf("\n\nPrimeira nota: %.2f\tSegunda nota: %.2f\nMédia aritmética: %.2f", nota1, nota2, media_aritimetica);
			break;
			case 2:
				printf("Primeira nota: ");
				scanf("%f", &nota1);
				printf("Peso da nota: ");
				scanf("%d", &peso1);
				printf("Segunda nota: ");
				scanf("%f", &nota2);
				printf("Peso da nota: ");
				scanf("%d", &peso2);
				printf("Terceira nota: ");
				scanf("%f", &nota3);
				printf("Peso da nota: ");
				scanf("%d", &peso3);
				
				media_ponderada = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
				
        printf("---SENAI---");
				printf("\nAluno: %s\nAno: %dº\tTurma: %d", nome, ano, turma);
        printf("\n\nPrimeira nota: %.2f\tPeso: %d\nSegunda nota: %.2f\tPeso: %d\nTerceira nota: %.2f\tPeso: %d\nMédia ponderada: %.2f", nota1, peso1, nota2, peso2, nota3, peso3, media_ponderada);
			break;
			case 3:
				printf("---SENAI---\nSistema finalizado");
			break;
			default:
				printf("\nOpcão inválida");
			break;
		}
	}
return 0;
}

/* 02. Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. Verificar a possibilidade de opção inválida e não se preocupar com as restrições, como salário inválido.  
Menu de opções:  
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair  
Digite a opção desejada:
Na Opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras da tabela em anexo.
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as férias equivale  ( salário Bruto + ⅓ de salário bruto).
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo 12, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale ao seu salário multiplicado pelo número de meses de trabalho dividido por 12.  
Na opção 4: sair do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int selecao, meses;
	float salario;
	
	while(selecao!=4){
		printf("\n\n---EMPRESA SENAI---\nPortal do funcionário");
		printf("\n\n(1) Novo salário\n(2) Férias\n(3) Décimo terceiro\n(4) Sair\n-> ");
		scanf("%d", &selecao);
		
		switch (selecao){
			case 1:
				printf("Insira seu salário\n-> ");
				scanf("%f", &salario);
					
					if(salario<=350){
						printf("Novo salário após 15%% de aumento: R$ %.2f", salario+salario*0.15);
						}else if(salario<=600){
							printf("Novo salário após 10%% de aumento: R$ %.2f", salario+salario*0.10);		
					}else{
						printf("Novo salário após 5%% de aumento: R$ %.2f", salario+salario*0.05);
					}			
			break;
			case 2:
				printf("Insira seu salário\n-> ");
				scanf("%f", &salario);
				
				printf("Valor referente as férias: R$ %.2f", salario+salario/3);
			break;
			case 3:
				printf("Insira seu salário\n-> ");
				scanf("%f", &salario);
				printf("Insira os meses trabalhados (máximo 12): \n-> ");
				scanf("%d", &meses);
				
					if(meses<=12){
						printf("Valor do décimo terceiro: R$ %.2f", salario*meses/12);
					}else{
						printf("Valor inválido");
					}	
			break;
			case 4:
				printf("---EMPRESA SENAI---\nPortal do funcionário\n\nSistema finalizado");
			break;
			default:
				printf("Opção inválida\nSelecione uma das opções abaixo");
			break;
		}
	}
return 0;
}
