#include <stdio.h>

#include <stdio.h>

int main(void) {
 int nome,senha;
 printf("digite o nome de 111usuaro\n");
  scanf("%d",&nome);
  printf("digite a senha\n");
    scanf("%d",&senha);
 while(senha==nome){
   printf("senha e igual ao nome digite o valor novamente:\n");
   scanf("%d",&senha);
   break;
   }


  
  return 0;
}
