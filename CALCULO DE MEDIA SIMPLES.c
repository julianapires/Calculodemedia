#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int N1,N2,Media; //Declara��o de vari�veis
	printf("Informe a Nota 1: "); //Pede a primeira nota ao usu�rio
	scanf("%d",&N1); //Le a informa��o dada pelo usu�rio
	printf("Informe a Nota 2: "); //Pede a segunda nota ao usu�rio
	scanf("%d",&N2); //Le a informa��o dada pelo usu�rio
	Media=(N1+N2)/2; //Calculo da m�dia (N1+N2)/2
	if (Media>=80) //Condiciona m�dia maior que 80
	printf("\nParabens\n"); //Escreve a mensagem de parab�ns para m�dia maior que 80
	else //Sen�o menor q 80
	printf("\nEstude mais\n"); //Escreve a mensagem de estude mais para m�dia menor que 80
	system ("pause");
	return 0;
}
