// desafio xadrez
#include <stdio.h>

int main()
{
  printf("Movimento da Torre:\n"); // movimento da Torre T = Torre)
  for (int T= 0;T < 5; T++) // 5 casas direita
  {
    printf("Direita\n");
  }
  printf("\n");

  printf("Movimento do Bispo:\n"); // movimento do Bispo B = Bispo)
  int B = 0;
  while (B < 5) // 5 casas diagonal
  {
    printf("Cima, Direita\n");
    B++;
  }
  printf("\n");

  printf("Movimento da Rainha:\n"); // movimento da Rainha R = Rainha)
  int R = 0;
  do
  {
    printf("Esquerda\n");
    R++;
  } while (R < 8); // oito casas esquerda

  return 0;
}
