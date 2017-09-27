#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int N1,N2,Media; //Declaração de variáveis
	printf("Informe a Nota 1: "); //Pede a primeira nota ao usuário
	scanf("%d",&N1); //Le a informação dada pelo usuário
	printf("Informe a Nota 2: "); //Pede a segunda nota ao usuário
	scanf("%d",&N2); //Le a informação dada pelo usuário
	Media=(N1+N2)/2; //Calculo da média (N1+N2)/2
	if (Media>=80) //Condiciona média maior que 80
	printf("\nParabens\n"); //Escreve a mensagem de parabéns para média maior que 80
	else //Senão menor q 80
	printf("\nEstude mais\n"); //Escreve a mensagem de estude mais para média menor que 80
	system ("pause");
	return 0;
}
