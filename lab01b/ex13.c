//Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char frase[100];
  int qnt = 0, pos;
  
  printf("Digite uma frase: ");
  fgets(frase, 100, stdin);
  
  printf("Digite a posicao do caracter que deseja remover: ");
  scanf("%d", &pos);

  frase[pos] = '\0';

  while((frase[pos+1])!='\0')
  {
    frase[pos] = frase[pos+1];
    pos++;
  }
  frase[pos] = '\0';

  printf("frase nova: ");

  for (int i = 0; i < 100; i++)
  {
    printf("%c", frase[i]);
    
    if(frase[i] == '\0') {
      break;
    }
  }
}
