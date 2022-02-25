// Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
/*maior ou igual a 9	A
maior ou igual a 7.5 e menor que 9	B
maior ou igual a 6 e menor que 7.5	C
maior ou igual a 4 e menor que 6	D
menor que 4	E*/

#include <iostream>
#include <stdio.h>
using namespace std;

char media(float N1, float N2, float N3, float ME){
  
  char nota;
  int MA;

  MA = (N1 + 2*N2 + 3*N3 + ME)/7;

  if (MA >= 9){
    nota = 'A';
  }
  else if (MA >= 7.5 && MA < 9){
    nota = 'B';
  }
  else if (MA >= 6 && MA < 7.5){
    nota = 'C';
  }
  else if (MA >= 4 && MA < 6){
    nota = 'D';
  }
  else{
    nota = 'E';
  }
  return nota;
}

int main() 
{
  float n1, n2, n3, me;
  cout << "Por favor, insira a suas notas para que possamos fazer a média: " << endl;
  cout << "nota N1: ";
  cin >> n1;
  cout << "nota N2: ";
  cin >> n2;
  cout << "nota N3: ";
  cin >> n3;
  cout << "nota ME: ";
  cin >> me;
  
  char notafinal;
  notafinal = media(n1, n2, n3, me);

  cout << "\nA media final do aluno foi " << notafinal << endl;
}
