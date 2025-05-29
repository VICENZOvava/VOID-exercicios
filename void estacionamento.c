#include <stdio.h>
#include <stdlib.h>


typedef struct {
	char marca[30], modelo[30], cor[30];
	float valor;
	int quantidade, ano, tipocombus, id;
} venda;

venda vendas[10];

int numvenda = 0;

void registrarcarro();
void listarcarros();
void filtrarporcombustivel();
void buscarveiculo();

int main() {

	int opcao;
	int contador = 0;
	
	for (int i = 0; i< 1000; i++) {
	    if (contador == 8) contador  = 0;
	    printf ("\033[3%dm%d", contador, i);
	    contador++;
	}
	
	do {
		printf ("**** ESTACIONAMENTO **** \n"); 
		printf ("1 - registrar CARRO\n");
		printf ("2 - listar CARROS\n");
		printf ("3 - filtrar por combustivel\n");
		printf ("4 - buscar veiculo\n");
		printf ("0 - sair\n");
		printf ("selecione uma opcao :");
		scanf ("%d", &opcao);
		system ("clear");

		switch (opcao) {
		case 1:
		registrarcarro();
			break;
		case 2:
		listarcarros();
			break;
		case 3:
        filtrarporcombustivel();
			break;
		case 4:
		buscarveiculo();
		case 0:
			printf (" obrigado \n");
			break;
		default:
			printf ("opcao invalida \n");
			break;
		}
		printf ("Enter para continuar . . .");
		getchar();
		getchar();
		system ("clear");
	} while (opcao !=0);

	return 0;
}

void registrarcarro() {
	printf (" -- REGISTRO -- \n");
	printf (" marca do carro: \n");
	scanf("%s", vendas[numvenda].marca);
	printf ("modelo do carro: \n");
	scanf("%s", vendas[numvenda].modelo);
	printf("cor do carro: \n");
	scanf ("%s", vendas[numvenda].cor);
	printf ("ano do carro : \n");
	scanf ("%d", &vendas[numvenda].ano);
	printf ("valor do carro : \n");
	scanf ("%f", &vendas[numvenda].valor);
	printf("Quantidade: ");
    scanf("%d", &vendas[numvenda].quantidade);
    printf ("digite um ID para registro : \n");
    scanf ("%d", &vendas[numvenda].id);
    printf("++ Selecione o tipo de combustivel ++\n");
    printf("1 - Etanol\n2 - Gasolina\n3 - Flex\n4 - Eletrico\n");
    scanf("%d", &vendas[numvenda].tipocombus);
	numvenda++;
}

void listarcarros() {
	printf (" --- carros cadastrados ---\n");
	for (int i = 0; i < numvenda; i++) {
		printf (" marca : %s\n", vendas[i].marca);
		printf (" modelo do carro: %s", vendas[i].modelo);
		printf (" cor: %s\n", vendas[i].cor);
		printf (" ano: %d\n", vendas[i].ano);
		printf (" tipo do combustivel: %d\n", vendas[i].tipocombus);
		printf("  Quantidade: %d\n", vendas[i].quantidade);
		printf ("\033[32m"); // habilita cor verde
		printf("Valor do carro: R$ %.2f\n", vendas[i].valor);
		printf ("\033[0m"); // desabilita cor
		printf ("-------------------------\n");
	}
}

void filtrarporcombustivel() {
    int tipo;
    printf("Digite o tipo de combustivel para filtrar (1-Etanol, 2-Gasolina, 3-Flex, 4-Eletrico): ");
    scanf("%d", &tipo);

    for (int i = 0; i < numvenda; i++) {
        if (vendas[i].tipocombus == tipo) {
            printf("Marca: %s | Modelo: %s | Valor: R$ %.2f\n", vendas[i].marca, vendas[i].modelo, vendas[i].valor);
        }
    }
}

void buscarveiculo () {
    int idBusca;
    int encontrado = 0;

    printf("Digite o ID do veículo: ");
    scanf("%d", &idBusca);

    for (int i = 0; i < numvenda; i++) {
        if (vendas[i].id == idBusca) {
            printf("=== Veículo Encontrado ===\n");
            printf("Marca: %s\n", vendas[i].marca);
            printf("Modelo: %s\n", vendas[i].modelo);
            printf("Ano: %d\n", vendas[i].ano);
            printf("Cor: %s\n", vendas[i].cor);
            printf("Valor: R$ %.2f\n", vendas[i].valor);
            printf("Quantidade: %d\n", vendas[i].quantidade);

}
            encontrado = 1;
            break;
        }
    }

