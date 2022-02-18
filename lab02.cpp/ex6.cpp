//Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
  int COL, LIN;
  cout << "Por favor, inserir o número de colunas: ";
  cin >> COL;
  cout << "Por favor, inserir o número de linhas: ";
  cin >> LIN;
  
  int matriz[LIN][COL];
  int valor;
  for(int i = 0; i < LIN; i++){
    for(int k = 0; k < COL; k++){
      cout << "Por favor, inserir o valor da matriz" << "[" << i << "]" << "[" << k << "]" << endl;
      cin >> valor;
      matriz[i][k] = valor;
    }
  }

  cout << "matriz: " << endl;

  for(int i = 0; i < LIN; i++){
    for(int k = 0; k < COL; k++){
      cout << " " << matriz[i][k];
    }
    cout << endl;
  }

  int matrizTRANS[COL][LIN];

  srand(time(NULL));

  for(int i = 0; i < LIN; i++){
    for(int k = 0; k < COL; k++){
      matrizTRANS[k][i] = matriz[i][k];
    }
  }

  cout << "matriz transposta: " << endl;
  for(int i = 0; i < COL; i++){
    for(int k = 0; k < LIN; k++){
      cout << matrizTRANS[i][k];
      cout << " ";
    }
    cout << endl;
  }
}
