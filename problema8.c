/* Um varejista online vende cinco produtos diferentes, cujos
preços de varejo são mostrados na tabela a seguir:
Número do      Preço no
produto         varejo
1                3, 00
2                4, 00
3                2, 80
4                1, 95
5                5, 00
Escreva um programa que leia uma série de pares de números da seguinte
forma: Número do produto e Quantidade vendida por um dia. Seu programa
deve usar uma instrução switch para ajudar a determinar o preço de varejo
de cada produto. Seu programa deve calcular e exibir o valor total de varejo
de todos os produtos vendidos na semana passada. */
  
#include <stdio.h>
#include <string.h>

float valorItem(int numeroPedido){
  switch(numeroPedido){
    case 1:
      return 3.00;
    case 2:
      return 4.00;
    case 3:
      return 2.80;
    case 4:
      return 1.95;
    case 5:
      return 5.00;
    default:
      return -1;
  }
}

float vendaTotal(int pedido, int qtd){
  float total = qtd * valorItem(pedido);
  return total;
}

int main(){ 
    int pedido, qtd;
    int* ped = &pedido;
    int* pqtd = &qtd;
    printf("digite o numero do pedido: ");
    scanf("%d",ped);
    printf("digite a quantidade do pedido: ");
    scanf("%d",pqtd);

    printf("%.2f\n",vendaTotal(*ped, *pqtd));
  
    return 0;
}
