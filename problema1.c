/* Escreva um programa para somar uma sequência de inteiros e
calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
o número de valores a serem inseridos. Seu programa deve ler apenas um
valor cada vez que scanf é executado. Uma sequência de entrada típica pode
ser:
7 678 234 315 489 536 456 367 */

#include <stdio.h>

int funcao (int x){
int num,i, soma = 0;
	for(i = 1; i <= x; i++){
		printf("\nInforme o número %iº: ",i);
		scanf("%i",&num);
		soma += num;
	}
return printf("\nO resultado da soma dos inteiros é: %i",soma);		
}
int main(){
int n;
printf("Informe quantos números inteiros deseja somar: ");
scanf("%i",&n);
funcao(n);	
	return 0;
}
