/*7. Faça um programa que leia 10 números inteiros positivos, calcule e escreva os que são números
perfeitos. Sendo que, um número perfeito é aquele cuja soma de seus divisores, exceto ele
próprio, é igual ao número.
Exemplo: 6 é perfeito porque 1 + 2 + 3 = 6
 28 é perfeito porque 1 + 2 + 4 + 7 + 14 = 28
*/

#include <stdio.h>
#include <stdlib.h>

int verificaPerfeito(int NUMERO)
{

  int DIVISOR, SOMA;
  DIVISOR = 1;
  SOMA = 0;

  do
  {
    if (NUMERO % DIVISOR == 0)
    {
      SOMA += DIVISOR;
    }
    DIVISOR++;
  } while (DIVISOR < (NUMERO - 1));
  printf("\n");
  if (NUMERO == SOMA && NUMERO != 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int numeros[10];

  printf("Digite 10 numeros inteiros para verificar se eh um numero perfeito:\n");
  for (int cont = 0; cont < 10; cont++)
  {
    scanf("%d", &numeros[cont]);
  }

  for (int cont = 0; cont < 10; cont++)
  {
    if (verificaPerfeito(numeros[cont]))
    {
      printf("%d eh um numero perfeito porque ", numeros[cont]);
      printf("1");
      for (int i = 2; i < numeros[cont]; i++)
      {
        if (numeros[cont] % i == 0)
        {
          printf(" + %d", i);
        }
      }
      printf(" = %d\n", numeros[cont]);
    }
    else
    {
      printf("%d nao eh um numero perfeito\n", numeros[cont]);
    }
  }
  return 0;
}
