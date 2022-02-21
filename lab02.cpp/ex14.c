//Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  char frase[100], aux1, aux2, car;
  int qnt = 0, pos;
  
  printf("Digite uma frase: ");
  scanf("%s", frase);
  
  printf("Digite a posicao que deseja inserir o caracter: ");
  scanf("%d", &pos);
  
  getchar();
  printf("Digite o caracter que deseja inserir: ");
  scanf("%c", &car);

  aux1 = frase[pos];
  for (int i = pos+1; i < strlen(frase)+1; i++){
    aux2 = frase[i];
    frase[i] = aux1;
    aux1 = aux2;
  }

  frase[pos] = car;

  printf("frase nova: ");

  for (int i = 0; i < 100; i++)
  {
    printf("%c", frase[i]);
    
    if(frase[i] == '\0') {
      break;
    }
  }
}
