/* A função fatorial é freqüentemente usada em problemas de
probabilidade. O fatorial é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros de 1 a n. Imprima
os resultados em formato tabular. */

#include <stdio.h>
int main(){

    float n, fat = 1 , i = 1;
    printf("Digite um numero: ");
    scanf("%f", &n);

    while(i <= n){
        fat = fat * i;
        printf("!%.f = %.3f\n", i, fat);
        i++;
    }
    return 0;
}
