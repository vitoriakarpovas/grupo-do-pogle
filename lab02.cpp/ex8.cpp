// Crie uma função capaz de criar a transposta de uma matriz.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {

  int LIN = 3;
  int COL = 3;
  
  int matriz[LIN][COL];
  
  matriz[0][0] = 1;
  matriz[0][1] = 2;
  matriz[0][2] = 3;
  matriz[1][0] = 4;
  matriz[1][1] = 5;
  matriz[1][2] = 6;
  matriz[2][0] = 7;
  matriz[2][1] = 8;
  matriz[2][2] = 9;

  cout << "matriz:" << endl;

  for (int i = 0; i < LIN; i++){
    for (int k = 0; k < COL; k++){
      cout << matriz[i][k] << " ";
    }
    cout << endl;
  }

  int matrizTRANS[COL][LIN];

  srand(time(NULL));

  for (int i = 0; i < LIN; i++){
    for (int k = 0; k < COL; k++){
      matrizTRANS[k][i] = matriz[i][k];
    }
  }

  cout << "\nmatriz transposta:" << endl;
  for (int i = 0; i < COL; i++){
    for (int k = 0; k < LIN; k++){
      cout << matrizTRANS[i][k] << " ";
    }
    cout << endl;
  }
}
