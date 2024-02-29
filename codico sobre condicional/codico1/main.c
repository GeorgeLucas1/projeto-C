#include <stdio.h>
// tarefaExercício 1

// programa para saber se os numero sao iguais, me diga se o numero é maior

int main(void) {
int numero1,numero2,numero3;
  printf("digite o primeiro numero:\n");
  scanf("%d",&numero1);
  printf("digite o segundo  numero:\n");
  scanf("%d",&numero2);
  printf("digite o terceiro numero:\n");
  scanf("%d",&numero3);
 if (numero1==numero2 & numero1==numero3){
   printf("os numero sao iguais\n");
}
if(numero1 >numero2 & numero1>numero3){
  printf("o numero %d  e maior\n",numero1);
}
if(numero2>numero1 & numero2>numero3){
printf("o numero %d e maior\n",numero2);
}
if(numero3>numero2 &numero3>numero1){
  printf("o numero %d e maior\n",numero3);
}
}

