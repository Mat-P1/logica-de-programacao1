/*A Escola Jesuítas, depois de alguns anos, está dando adeus ao papel e irá automatizar seus processos. Ela deseja que
você crie um sistema para gerenciar as notas dos alunos.
Etapa 1
A tela inicial do sistema deverá conter o nome da Escola e as opções de Inserir Notas, Visualizar Notas,
Calcular Média e Sair.
Requisitos:
A quantidade de alunos será especificada pelo professor.
Os alunos possuem 4 notas durante o ano para saber a média.
Caso alguma nota seja menor que 4 o sistema deverá automaticamente zerar a nota.
O sistema irá calcular a média e visualizar as notas, caso já tenha sido inserido as notas previamente.
Obs: Trabalhe com menu.
Conhecimentos Técnicos
Estrutura de Repetição, Estruturas Condicionais e Arrays.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int op, a, b=0, c=0;
	float nota[1000][4], soma=0;
	
	printf("Escola Jesuítas\n");
	printf("Calculo de Médias\n");
	
	while(op!=4){
		printf("[1]-Inserir Notas\n");
		printf("[2]-Visualizar Notas\n");
		printf("[3]-Calcular Média\n");
		printf("[4]-Sair\n\n-> ");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				if(b==0){
					printf("Numéro de alunos:\n-> ");
					scanf("%d", &a);
						for(int i=0;i<a;i++){
							for(int j=0;j<4;j++){
								printf("\nInsira a %dº nota do %dº aluno:\n-> ", j+1, i+1);
								scanf("%f", &nota[i][j]);
								if(nota[i][j]<4){
									nota[i][j]=0;
								}
							}
						}
				}else{
					printf("Notas já inseridas!\n");
				}
				b=1;
			break;
			case 2:
				if(b==0){
					printf("Primeiro digite as notas.\n");
					printf("Numéro de alunos:\n-> ");
					scanf("%d", &a);
					b=1;
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("\nInsira a %dº nota do %dº aluno:\n-> ", j+1, i+1);
							scanf("%f", &nota[i][j]);
							if(nota[i][j]<4){
								nota[i][j]=0;
							}
						}
					}
				}else{
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("A %dº nota do %dº aluno é: %.2f\n", j+1, i+1, nota[i][j]);
						}
					}
				}
			break;
			case 3:
				if(b==0){
					printf("Primeiro digite as notas.\n");
					printf("Numéro de alunos:\n-> ");
					scanf("%d", &a);
					b=1;
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("\nInsira a %dº nota do %dº aluno:\n-> ", j+1, i+1);
							scanf("%f", &nota[i][j]);
							if(nota[i][j]<4){
								nota[i][j]=0;
							}
						}
					}	
					c=1;
				}else{
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							soma+=nota[i][j];
						}
						printf("A média do %dº é: %.2f\n", i+1, soma/4);
						soma=0;
							for(int j=0;j<4;j++){
								printf("E a %dº nota do %dº aluno é: %.2f\n", j+1, i+1, nota[i][j]);
							}
						}
					}
			break;
			case 4:
				printf("Obrigado por usar nosso sistema.");
			break;
			default:
				printf("Opção inválida\n");
				break;
		}
	}
}
