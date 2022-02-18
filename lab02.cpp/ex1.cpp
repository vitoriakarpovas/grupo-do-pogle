#include <iostream>
#include <stdio.h>
using namespace std;

int show(int arr[3][3], int row)
{
  int menor = 10000;
  int linha;
  for (int i = 0; i < row; i++){
    for (int j = 0; j < 3; j++){
      if(arr[i][j] < menor){
        menor = arr[i][j];
        linha = j;
      }
    }
  }
  return linha;
}

int main() 
{
  int linha;
  int arr[3][3]= {{10,2,3}, {4,3,6}, {7,9,0}};
  linha =show(arr, 3);
  
  cout <<  "o menor elemento esta na linha " << linha+1 << endl;
  
  return 0;
}
