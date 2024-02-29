#include <stdio.h>

int main(void) {
 float vale,semana,ida,vinda;
  printf("havera aula ate que dia na\nsemana 1-segunda\n2-terca\n3-quarta\n4-quinta\n5-Sexta:\n");
 scanf("%f",&semana);
printf("digite o valor que ira gastar na ida\n");
scanf("%f",&ida);
  printf("digite o valor que ira gastar na vinda\n");
  scanf("%f",&vinda);
vale=(semana)*(ida+vinda);
printf("o valor que ira gastar nessa semna é igual a %0.2f",vale);
  return 0;
}