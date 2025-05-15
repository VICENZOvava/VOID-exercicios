
#include <stdio.h>
void exercicio1 ();
void exercicio2 ();
void exercicio3 ();

int main() {
	int opcao;



	printf ("1 - primeiro exercicio \n");
	printf ("2 - segundo exercicio \n");
	printf ("3 - terceiro exercicio \n");
	scanf ("%d", &opcao);
	switch (opcao) {
	case 1:
		exercicio1 ();
		break;
	case 2:
		exercicio2 ();
		break;
	case 3:
		exercicio3 ();
		break;
	default:
		printf ("opcao invalida! programa encerrado. \n");
		return 1;

	}

	return 0;

}
void exercicio1 () {
    float combustivel,gasto;
char gastos;
int distancia;

printf(" distancia percorrida com seu carro\n");
scanf("%d",&distancia);
printf(" quantidade em litros de gasolina que gastou\n");
scanf("%f",&combustivel);

    gasto = combustivel / distancia;
    printf("seu gasto foi :%.3f\n", gasto);


}
void exercicio2 (){
    int idade, res,res2, res3;
    printf ("Digite sua a sua idade em dias");
    scanf ("%d", &idade);
   res =  idade / 365;
   res2 = (idade % 365)/ 12;
   res3 = res2 % 30; 
   printf (" %d ano (s) \n", res);
   printf (" %d mes (es) \n", res2);
   printf (" %d dia (s) \n", res3);    
}

void exercicio3 (){
    	int mesN;
	char *mesNome;
	printf ("Digite o numero do mes \n");
	scanf ("%d", &mesN);
	switch (mesN) {
	case 1:
		mesNome = "January";
		          printf ("%s", mesNome);
		break;

	case 2:
		mesNome = "February";
		          printf ("%s", mesNome);
		break;

	case 3:
		mesNome = "March";
		          printf ("%s", mesNome);
		break;

	case 4:
		mesNome = "April";
		          printf ("%s", mesNome);
		break;

	case 5:
		mesNome = "May";
		          printf ("%s", mesNome);
		break;

	case 6:
		mesNome = "June";
		          printf ("%s", mesNome);
		break;

	case 7:
		mesNome = "July";
		          printf ("%s", mesNome);
		break;
	case 8:
		mesNome = "Augost";
		          printf ("%s", mesNome);
		break;

	case 9:
		mesNome = "September";
		          printf ("%s", mesNome);
		break;

	case 10:
		mesNome = "October";
		          printf ("%s", mesNome);
		break;

	case 11:
		mesNome = "November";
		          printf ("%s", mesNome);
		break;

	case 12:
		mesNome = "December";
		          printf ("%s", mesNome);
		break;
	default:
		printf ("opcao invalida! programa encerrado. \n");

	}
}