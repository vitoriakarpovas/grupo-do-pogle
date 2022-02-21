// Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.

#include <iostream>
#include <stdio.h>
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

  cout << "\nmatriz: " << endl;

  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << matriz[i][k];
      cout << "  ";
    }
    cout << endl;
  }

  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      if (i == 1){
        matriz[i][k] += matriz[i-1][k];
      }
    }
  }

  cout << "\nmatriz: " << endl;
  cout << "Soma: L2 = L2 + L1" << endl;

  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << matriz[i][k];
      cout << "  ";
    }
    cout << endl;
  }

  cout << "\nmatriz: " << endl;
  cout << "Multiplicação: L2 = L2 * L1" << endl;

  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      if (i == 1){
        matriz[i][k] *= matriz[i-1][k];
      }
    }
  }

  for (int i = 0; i < 3; i++){
    for (int k = 0; k < 3; k++){
      cout << matriz[i][k];
      cout << "  ";
    }
    cout << endl;
  }
}
