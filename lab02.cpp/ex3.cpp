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
