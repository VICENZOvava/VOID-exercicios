
#include <stdio.h>
void imprime ();
int sub (int A, int B);
int soma (int A, int B);
int mult (int A, int B);
int divisao (int A, int B);
int media (int A, int B);
int porcentagem (int A, int B);

int main(){
int opcao, v1, v2;
char *opcaoNome;

scanf ("%d", &v1);
scanf ("%d",&v2);
int res1 = sub (v1,v2);
int res2 = soma (v1,v2);
int res3 = mult (v1,v2);
int res4 = divisao (v1,v2);
int res5 = media (v1,v2);
int res6 = porcentagem (v1,v2);

printf ("1 - subtrair \n");
printf ("2 - soma \n");
printf ("3 - multiplicacao \n");
printf ("4 - divisao \n");
printf ("5 - media \n");
printf ("6 - porcentagem \n");
scanf ("%d", &opcao);
     switch (opcao) {
	   case 1:
	   	opcaoNome = "1";
	   	printf ("res = %d \n", res1 );
	   	break;
	   case 2:
	   	opcaoNome = "2";
	   	printf ("res = %d", res2 );
	   	break;
	   	case 3:
	   	opcaoNome = "3";
	   	printf ("res = %d \n", res3 );
	   	break;
	    case 4:
	   	opcaoNome = "4";
	   	printf ("res = %d", res4 );
	   	break;
	   	case 5:
	   	opcaoNome = "5";
	   	printf ("res = %d \n", res5 );
	   	break;
	    case 6:
	   	opcaoNome = "6";
	   	printf ("res = %d", res6 );
	   	break;
	    default:
	   	printf ("opcao invalida! programa encerrado. \n");
	   	return 1;
	   	
}

return 0;

}
void imprime (){
    printf ("teste\n");
    
}

int sub (int A, int B){
    int res1;
    res1 = A - B;
    return res1;
}

int soma (int A, int B ){
    int res2;
    res2 = A + B;
    return res2;
}
int mult (int A, int B ){
    int res3;
    res3 = A * B;
    return res3;
}
int divisao (int A, int B ){
    int res4;
    res4 = A / B;
    return res4;
}
int media (int A, int B ){
    int res5;
    res5 = ( A + B )/2;
    return res5;
}
int porcentagem (int A, int B ){
    int res6;
    res6 = ( A * B) / 100;
    return res6;
}