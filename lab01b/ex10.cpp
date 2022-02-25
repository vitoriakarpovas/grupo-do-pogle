// Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {

  int matriz[3][3];
  
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
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  int LIN, COL, a, b;
  
  cout << "\nqual linha vc deseja multiplicar? ";
  cin >> LIN;
  cout << "por quanto vc deseja multiplicar? ";
  cin >> a;

  cout << "\nqual coluna vc deseja multiplicar? ";
  cin >> COL;
  cout << "por quanto vc deseja multiplicar? ";
  cin >> b;

  for (int i = 0; i < 3; i++){ // linha
    for (int j = 0; j < 3; j++){ //coluna
      if (i == LIN-1){
        matriz[i][j] = a*matriz[i][j];
      }
      if (j == COL-1){
        matriz[i][j] = b*matriz[i][j];
      }
    }
  }

  cout << "\nmatriz multiplicada:" << endl;
  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << matriz[i][k] << " ";
    }
    cout << endl;
  }
}
