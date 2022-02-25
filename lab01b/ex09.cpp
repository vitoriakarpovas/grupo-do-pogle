// Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {

  int LIN = 3;
  int COL = 3;
  
  int matriz[LIN][COL];
  
  matriz[0][0] = 1;
  matriz[0][1] = -2;
  matriz[0][2] = 3;
  matriz[1][0] = -4;
  matriz[1][1] = 5;
  matriz[1][2] = -6;
  matriz[2][0] = 7;
  matriz[2][1] = -8;
  matriz[2][2] = 9;

  cout << "matriz:" << endl;

  for (int i = 0; i < LIN; i++){
    for (int j = 0; j < COL; j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < LIN; i++){
    for (int j = 0; j < COL; j++){
      if (matriz[i][j] < 0){
        matriz[i][j] = -matriz[i][j];
      }
    }
  }

  cout << "\nmatriz positiva:" << endl;
  for (int i = 0; i < COL; i++){
    for (int k = 0; k < LIN; k++){
      cout << matriz[i][k] << " ";
    }
    cout << endl;
  }
}
