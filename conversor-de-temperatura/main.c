#include <stdio.h>

int main(void) {
  float farenheint,Celsius;
  printf("digite o valor da temperatura em farenheint\n");
  scanf("%f",&farenheint);
  Celsius=(5*(farenheint-32)/9);
  printf("o valor em celsius é %f\n",Celsius);
  return 0;
}