// Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct {
  string Nome;
  float Peso;
  int Idade;
  float Altura;
}Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura)
{
  Pessoa P;
  P.Idade = idade;
  P.Peso = peso;
  P.Altura = altura;
  return P;
}

void ImprimePessoa(Pessoa P)
{
  cout << "Idade: " << P.Idade << " anos\nPeso: " << P.Peso << "kg\nAltura: " << P.Altura << "m" << endl;
}

int main()
{
  string name[5] = { "Dani", "Pogle", "Julia", "Gusma", "Vitroia" };
   
  Pessoa Dani;
  Pessoa Pogle;
  Pessoa Julia;
  Pessoa Gusma;
  Pessoa Vitroia;
  Dani = SetPessoa(20, 60.5, 1.57);
  Pogle = SetPessoa(15, 70.5, 1.80);
  Julia = SetPessoa(12, 45, 1.57);
  Gusma = SetPessoa(21, 67, 1.61);
  Vitroia = SetPessoa(20, 48.5, 1.60);

  Pessoa vet[5] = {Dani, Pogle, Julia, Gusma, Vitroia};
  
  for (int i = 0; i < 3; i++){
    Pessoa A;
    cout << "\nNome da " << i+1 << "a pessoa que deseja buscar: ";
    cin >> A.Nome;
    
    int flag = 0;
    for (int j = 0; j < 5; j++){
      if (A.Nome == name[j]){
        flag = 1;
        ImprimePessoa(vet[j]);
      }
    }
    if (flag == 0){
      cout << "Nome nao encontrado no vetor." << endl;
    }
  }
  
  return 0;
}
