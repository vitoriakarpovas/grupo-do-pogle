//Link usado de referencia: https://www.csl.mtu.edu/cs4411.ck/www/NOTES/process/shm/example-1.html

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>



int main()
{
    int shmid;
    int *ShmPTR;
    pid_t pid;
    int status;


   shmid = shmget(IPC_PRIVATE, 4*sizeof(int), IPC_CREAT | 0666);
     if (shmid < 0) {
          printf("\n****** Erro no ShmGET ******\n");
          exit(1);
     }

    ShmPTR = (int*)shmat(shmid, NULL, 0);
    
    if ((int)*ShmPTR == -1)
    {
        printf("\n****** Erro no ShmAT ******\n");
        exit(1);
    }
  //o processo pai e o processo filho compartilhem uma variável simples
  *ShmPTR = 10;
  //o processo pai imprime o valor inicial dessa variável; em seguida, cria o processo filho e espera - o
  printf("Memoria compartilhada é a variavel %d\n", *ShmPTR);

    pid = fork();

    if (pid < 0)
    {
        printf("\n****** Erro no Fork ******\n");
        exit(1);
    }
    else if (pid == 0)
    {
      //o processo filho acessa esta variável, realiza uma operação, modificando o valor; em seguida, o processo filho termina
      printf("\nVariavel se encontra no processo filho.");
        *ShmPTR *= 8;
        printf("\nO novo valor da variavel agora é %i", *ShmPTR);
    }
    else
    {
      //Se vc tirar esse processo do else ele sera lido 2 vezes paralelamente (isso tava bom na minha cabeça, me deixa)
      wait(&status); 
      printf("\nApos esperar, foi detectado que o processo filho foi completado...\n");
      
        //o processo pai realiza uma outra operação, modificando novamente o valor, e imprime novamente a variável
      printf("\nVariavel se encontra no processo pai.");
        *ShmPTR -= 11;
        printf("\nO novo valor da variavel agora é %i", *ShmPTR);
    }
  
    printf("\nMemoria compartilhada removida");
    shmctl(shmid, IPC_RMID, NULL);

    printf("\n****Server exits...****\n");
    exit(0);
}


