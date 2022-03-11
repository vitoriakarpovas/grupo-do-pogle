#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>

//create struct person
typedef struct
{
  char name[100];
  int age;
  float height;
} Person;

int main()
{
  
  Person victor[4];
  FILE *file;
  FILE *arq;
  const char s[3] = "\0";
  char *token;
  char frase[100];
  const char p[3] = "/";

  //opening the file for "r(reading) and w(writing)"
  file = fopen("nome.txt", "r");
  arq = fopen("saida.txt", "w");

  //checking if the file that's reading exist
  if(file == NULL)
  {
    printf("File not Found\n");
    exit(0);
  }
  //obs: if the file that's writing doesn't exist, he tries to creat it
  int i = 0;
  //reading file
  while(fgets(frase, sizeof(frase), file) != NULL) //get as a str
  {
    token = strtok(frase, s);
    char *ptr = strtok(token, p);
    strcpy(victor[i].name, ptr);
    ptr = strtok(NULL, p);
    victor[i].age = atoi(ptr);
    ptr = strtok(NULL, p);
    victor[i].height = atof(ptr);
    i++;
  }
  fclose(file);

  for(int p = 0; p < 10;p++)
    {
      fprintf(arq,"nome: %s\nidade: %d\naltura: %2.2f\n\n", victor[p].name, victor[p].age,victor[p].height);
    }
  fclose(arq);
}
