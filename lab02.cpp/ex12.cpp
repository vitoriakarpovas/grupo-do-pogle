//Faça uma função que retorne a posição de um dado caracter dentro de uma string.

#include <stdio.h>
#include <stdlib.h>

void vetor(char* string, int* posicoes, int* numDeLetras, char letra)
{
  for (int i = 0; i < 100; i++){
    if (string[i] == letra){
      posicoes[*numDeLetras] = i;
      (*numDeLetras)++;
    }
    
    if(string[i] == '\n'){
      break;
    }
  }
}

int main(){
  
  char frase[100], letra;
  int posicoes[100], qnt = 0;
  
  printf("Digite uma frase: ");
  for (int i = 0; i < 100; i++)
  {
    scanf("%c", &frase[i]);
    
    if(frase[i] == '\n') {
      break;
    }
  }
  
  printf("Digite a letra que vc quer buscar: ");
  scanf("%c", &letra);
  
  vetor(frase, posicoes, &qnt, letra);
  printf("\nTotal de letras encontradas na frase: %d\n", qnt);
  if (qnt != 0){
    printf("Posicao de cada letra na frase: ");
    for (int i = 0 ; i < qnt; i++){
      printf("%d ", posicoes[i]+1);
    }
  }
  
}
