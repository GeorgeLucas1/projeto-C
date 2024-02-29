#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int idade;
    printf("*****************tabela da faixa etaria************************\n");
    printf("bebe menor que 5 anos\n crianca maior que 8 anos\nAdolecente maior que 12 anos\nAdulto maior que 18 anos\nidoso maior que 60 ano\n");
    printf("**************************************************************************************************************\n");
   printf("digite sua idade:\n");
    scanf("%d",&idade);
    
   if(idade<=5 & idade<=8){
   printf("voce possui a %d idade.\n",idade);
   printf("\nvoce e um bebe\n");
   }
   if(idade>=8 & idade<12){
   	printf("voce tem %d de idade.\n",idade);
   	printf("voce ja e uma crianca\n");
   }
    if(idade>=12 & idade<18){
    printf("voce possui a idade de %d.\n",idade);
    printf("voce é adolescente\n");
	}
	if(idade>=18 & idade<=60){
	printf("voce possui a idade de %d \n",idade);
	printf("voce e adulto");
	}
	if (idade>=60){
	printf("voce possui a idade de %d\n",idade);
	printf("voce é idoso\n");
	}
	return 0;
}
