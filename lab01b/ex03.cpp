// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
/*1 2 3 4 5 6 7 8 9
   2 3 4 5 6 7 8
      3 4 5 6 7
         4 5 6
            5*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
  int limit;
  cout << "Por favor, insira o número máximo (tem que ser impar): ";
  cin >> limit;

  while (limit % 2 == 0){
    cout << "Numero par, por favor inserir numero impar: ";
    cin >> limit;
  }
  
  cout << endl;
  
  for (int i = 1; i <= limit; i++){
    for (int j = i; j <= limit; j++){
        cout << j << " ";
    } 
    cout << endl;
    limit = limit - 1;
  }
}
