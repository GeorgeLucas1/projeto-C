#include <stdio.h>

int main() {

  int numero, resultado, operacao;

  // Leitura do número
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Exibição do menu
  printf("-- Menu --\n");
  printf("1. Soma\n");
  printf("2. Subtração\n");
  printf("3. Multiplicação\n");
  printf("4. Divisão\n");

  // Leitura da operação
  scanf("%d", &operacao);

  // Loop para realizar as operações
  for (int i = 1; i <= 10; i++) {
    switch (operacao) {
      case 1:
        resultado = numero + i;
        printf("%d + %d = %d\n", numero, i, resultado);
       break;
        
      case 2:
        resultado = numero - i;
        printf("%d - %d = %d\n", numero, i, resultado);
      break;
        
      case 3:
        resultado = numero * i;
        printf("%d * %d = %d\n", numero, i, resultado);
       break;
      case 4:
      resultado=numero / i;
       printf("%d * %d = %d\n", numero, i, resultado);
      break;
    }
    
  }

  return 0;
}
