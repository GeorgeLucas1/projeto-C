#include <stdio.h>

int main(void) {
 float peso_ideal,altura;
 int genero;
printf("ola,tudo bem\nEscolha uma opção para conhcer seu peso ideal\n 1-homem 2-mulher\n");
scanf("%d",&genero);
printf("agora digite sua altura:\n");
 scanf("%f",&altura);

 switch(genero){
   case 1:
   peso_ideal=(72.7*altura)-58;
    printf("o seu peso ideal é %.2f\n",peso_ideal);
    break;
   case 2:
   peso_ideal=(62.1*altura)-44.7;
   printf("o seu peso ideal é %.2f\n",peso_ideal);
    break;
   }
 }
  
