#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int op, a, b=0, c=0;
	float nota[50000][4], soma=0;
	
	printf("---Escola Jesu�tas---\n");
	printf("\t---Calculo de M�dias---");
	printf("\n\t\tCarregando....\n");
	system("pause");
    system("cls");
	
	while(op!=4){
		printf("\t---Escola Jesu�tas---\n");
		printf("[1]-Inserir Notas\t");
		printf("[2]-Visualizar Notas\n");
		printf("[3]-Calcular M�dia\t");
		printf("[4]-Sair\n\n--->");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				if(b==0){
					printf("Quantos alunos voc� ira cadastrar:\n->");
					scanf("%d", &a);
						for(int i=0;i<a;i++){
							for(int j=0;j<4;j++){
								printf("\nInsira a %d� nota do %d� aluno:\n->", j+1, i+1);
								scanf("%f", &nota[i][j]);
								if(nota[i][j]<4){
									nota[i][j]=0;
								}
							}
						}
				}else{
					printf("Notas j� inseridas!!\n");
				}
				system("pause");
    			system("cls");
				b=1;
			break;
			case 2:
				if(b==0){
					printf("Primeiro digite as notas!!!\n");
					printf("Quantos alunos voc� ira cadastrar:\n->");
					scanf("%d", &a);
					b=1;
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("\nInsira a %d� nota do %d� aluno:\n->", j+1, i+1);
							scanf("%f", &nota[i][j]);
							if(nota[i][j]<4){
								nota[i][j]=0;
							}
						}
					}
				}else{
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("A %d� nota do %d� aluno �: %.2f\n", j+1, i+1, nota[i][j]);
						}
					}
				}
				system("pause");
    			system("cls");
			break;
			case 3:
				if(b==0){
					printf("Primeiro digite as notas!!!\n");
					printf("Quantos alunos voc� ira cadastrar:\n->");
					scanf("%d", &a);
					b=1;
					for(int i=0;i<a;i++){
						for(int j=0;j<4;j++){
							printf("\nInsira a %d� nota do %d� aluno:\n->", j+1, i+1);
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
						printf("A m�dia do %d� �: %.2f\n", i+1, soma/4);
						soma=0;
							for(int j=0;j<4;j++){
								printf("E a %d� nota do %d� aluno �: %.2f\n", j+1, i+1, nota[i][j]);
							}
						}
					}
    			system("pause");
    			system("cls");
			break;
			case 4:
				printf("Obrigado :)");
			break;
			default:
				system("cls");
				printf("Invalido digite outra op��o!!\n");
				break;
		}
	}
}
