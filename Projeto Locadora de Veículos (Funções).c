// Você deverá realizar o upload do código-fonte da locadora de veículos, com as implementações de funções

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao, diaria;
float pagamento, aluguel, valor_final;

int Menu () {
    printf("\n---LOCADORA DE VEÍCULOS SENAI---");
    printf("\n(1) Alugar carros\n(2) Alugar motos\n(3) Sair\n-> ");
    scanf("%d", &opcao);

return 0;
}

int Pagamento () {
    printf("\nQuantos dias de aluguel: ");
    scanf("%d", &diaria);
    printf("\nValor total: R$%.2f", pagamento = 1.0*diaria*aluguel);
    printf("\n\n---FORMA DE PAGAMENTO---");
    printf("\n(1) Á vista [15%% de desconto]\n(2) Duas vezes [Sem juros]\n(3) Três vezes [3%% de juros]\n-> ");
    scanf("%d", &opcao);                           
        if(opcao==1){
            valor_final = pagamento-(pagamento*0.15);
            printf("\nValor final: R$%.2f", valor_final);         					
            }else if(opcao == 2){
                valor_final = pagamento/2;
            	printf("\nValor final: Duas vezes de R$%.2f", valor_final);          							
			}else if(opcao == 3){
				valor_final = (pagamento+pagamento*0.03)/3;
            	printf("\nValor final: Três vezes de R$%.2f", valor_final);
        }else{
            printf("Escolha uma opção de pagamento válida");
		}
return 0;
}

int Carros () {
    printf("---LOCADORA DE VEÍCULOS SENAI---");
    printf("\n---CARROS---");
    printf("\nEscolha o ano do veículo");
    printf("\n(1) 2022\n(2) 2021\n-> ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("---CARROS 2022---\n\t\t\t\tDiária");
            printf("\n\n(1) Caoa Chery [Tiggo 5x Pro]\tR$110,00\n(2) Hyundai [HB20]\t\tR$90,00\n(3) Mercedes-Benz [A 250]\tR$150,00\n-> ");
            scanf("%d", &opcao);
                switch(opcao){
                    case 1:     
                        aluguel = 110;
                        return Pagamento ();      
                    break;
                    case 2:
                        aluguel = 90;
                        return Pagamento ();
                    break;
                    case 3:
                        aluguel = 150;
                        return Pagamento ();
                    break;
                    }
                break;
            case 2:
                printf("---CARROS 2021---\n\t\t\tDiária");
                printf("\n\n(1) Fiat [Pulse]\tR$80,00\n(2) Renault [Kwid]\tR$85,00\n(3) A. Romeo [Stelvio]\tR$100,00\n-> ");
                scanf("%d", &opcao);
                    
                switch(opcao){
                    case 1:
                        aluguel = 80;
                        return Pagamento ();
                    break;
                    case 2:
                        aluguel = 85;
                        return Pagamento ();
                    break;
                    case 3:
                        aluguel = 100;
                        return Pagamento ();
                break;
            }
        break;
     }	
return 0;	   
}

int Motos () {
    printf("---LOCADORA DE VEÍCULOS SENAI---");
    printf("\n---MOTOS---");
    printf("\nEscolha o ano do veículo");
    printf("\n(1) 2022\n(2) 2021\n-> ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        	printf("---MOTOS 2022---\n\t\t\tDiária");
			printf("\n\n(1) Honda [CG 160]\tR$70,00\n(2) Yamaha [YBR 150]\tR$60,00\n(3) Haojue [DK150]\tR$45,00\n-> ");
			scanf("%d", &opcao);
				switch(opcao){
					case 1:
                        aluguel = 70;
                        return Pagamento ();
					break;
					case 2:
                        aluguel = 60;
                        return Pagamento ();
					break;
					case 3:
                        aluguel = 45;
                        return Pagamento ();
					break;
					}
        	break;
        	case 2:
				printf("---MOTOS 2021---\n\t\t\tDiária");
				printf("\n\n(1) Honda [Biz 125]\tR$65,00\n(2) Yamaha [Fazer 250]\tR$60,00\n(3) Shineray [XY 50]\tR$40,00\n-> ");
				scanf("%d", &opcao);
					
				switch(opcao){
					case 1:
                        aluguel = 65;
                        return Pagamento ();
					break;
					case 2:
                        aluguel = 60;
                        return Pagamento ();
					break;
					case 3:
                        aluguel = 40;
                        return Pagamento ();
				break;
			}				
        break;
	}
return 0;
}

int main (void) {
    setlocale(LC_ALL, "Portuguese");

    while(opcao!=3){
        Menu();
        switch(opcao){
            case 1:
            Carros ();
            break;
            case 2:
            Motos ();
            break;
            case 3:
            printf("Obrigado por usar nossa locadora. Volte sempre.");
            break;
            default:
            printf("Opção inválida.");
            break;
        }
    }
}
