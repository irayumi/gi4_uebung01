#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[], char* envp[])
{
  pid_t childID = fork();
  int status;
  if(childID == -1||argc<2) // Zu wenige Argumente oder Fehler beim Erstellen des Kindprozesses
  {
    printf("Error!\n");
    return -1;
  }
  else if(childID==0) //im child
  {
    printf("(Child) ID child: %d\n", childID); // ist Null!
    char* argvNew[2] = {argv[1], NULL};
    execv(argv[1], argvNew);
  }
  else // in parent
  {
      printf("(Parent) ID child: %d\n", childID);
  }
  wait(NULL);
  return 0;
}
