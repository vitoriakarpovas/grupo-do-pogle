#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
  
int main(int argc , char *argv[])
{
  pid_t pid;
  
  if (argc != 2){
    printf("Falta de argumento ou em excesso\n");
    exit(0);
  }

  pid = fork();
  
  if (pid < 0){
    printf("Erro\n");
    exit(0);
  }
    
  else if (pid == 0){
    
    int i, j, k = 2, n;
    n = atoi(argv[1]);
    int arr[n];
  
    arr[0] = 1;

    for (i = 1; i < n; i++){
      arr[i] = arr[i - 1]*k;
      k++;
    }
    
    printf("%d ",arr[n-1]);
  }
  else {
    wait(NULL);
    printf("Pronto\n");
  }
}
