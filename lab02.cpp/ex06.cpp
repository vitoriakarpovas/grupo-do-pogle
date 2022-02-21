// Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
  int COL, LIN;
  cout << "Número de colunas: ";
  cin >> COL;
  cout << "Número de linhas: ";
  cin >> LIN;
  
  int matriz[LIN][COL];
  int valor;
  for(int i = 0; i < LIN; i++){
    for(int k = 0; k < COL; k++){
      cout << "Valor da matriz [" << i+1 << "][" << k+1 << "]: ";
      cin >> valor;
      matriz[i][k] = valor;
    }
  }

  cout << "\nmatriz:" << endl;

  for(int i = 0; i < LIN; i++){
    for(int k = 0; k < COL; k++){
      cout << matriz[i][k] << " ";
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

  cout << "matriz transposta:" << endl;
  for(int i = 0; i < COL; i++){
    for(int k = 0; k < LIN; k++){
      cout << matrizTRANS[i][k] << " ";
    }
    cout << endl;
  }
}
