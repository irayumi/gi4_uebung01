#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[])
{
  char *var = getenv(argv[1]);// gibt Wert von abgefragter Umgebungsvariable zurück
  if(var == NULL)
    return 1;
  else
  {
  if(argc == 3) // falls ein dritter Eingabeparameter existiert
    {
      if(strcmp(argv[2], "-v")==0) // und dieser "-v" ist
      {
        printf("%s\n", var); // Wert ausgeben und 0 zurückgeben
      }
    }
    return 0;
  }
}
