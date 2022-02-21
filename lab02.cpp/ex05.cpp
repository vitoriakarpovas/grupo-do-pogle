//Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.


#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int multiplicador, COL, LIN;
  cout << "Por favor, inserir o número de colunas: ";
  cin >> COL;
  cout << "Por favor, inserir o número de linhas: ";
  cin >> LIN;
  
  int matriz[LIN][COL];
  int valor;
  for(int i = 1; i <= LIN; i++){
    for(int k = 1; k <= COL; k++){
      cout << "Por favor, inserir o valor da matriz" << "[" << i << "]" << "[" << k << "]" << endl;
      cin >> valor;
      matriz[i][k] = valor;
    }
  }

  cout << "matriz: " << endl;

  for(int i = 1; i <= LIN; i++){
    for(int k = 1; k <= COL; k++){
      cout << " " << matriz[i][k];
    }
    cout << endl;
  }

  cout << "Por favor, inserir o seu multiplicador: " << endl;
  cin >> multiplicador;

  int choice, COLescolhido, LINescolhido;
  cout << "\nVocê deseja multiplicar: \n[1] - Coluna\n[2] - Linha" << endl;
  cin >> choice;
  if(choice == 1){
    cout << "Qual coluna você deseja multiplicar: ";
    cin >> COLescolhido;
    for(int i = 1; i <= LIN; i++){
      for(int k = 1; k <= COL; k++){
        if(k == COLescolhido){
          matriz[i][k] = matriz[i][k]*multiplicador;
        }
      }
    }
  }
  if(choice == 2){
    cout << "Qual linha você deseja multiplicar: ";
    cin >> COLescolhido;
    for(int i = 1; i <= LIN; i++){
      for(int k = 1; k <= COL; k++){
        if(i == LINescolhido){
          matriz[i][k] = matriz[i][k]*multiplicador;
        }
      }
    }
  }

  cout << "matriz: " << endl;

  for(int i = 1; i <= LIN; i++){
    for(int k = 1; k <= COL; k++){
      cout << " " << matriz[i][k];
    }
    cout << endl;
  }
}
