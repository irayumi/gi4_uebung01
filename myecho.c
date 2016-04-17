#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
int i = 0;
for(i=1; i<argc ; i++){
 printf(argv[i]);
 printf(" ");
}
printf("\n");
 return 0;
}
