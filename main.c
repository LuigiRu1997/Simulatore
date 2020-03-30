#include <stdio.h>
#include <stdlib.h>

int main()
{
  double  engineValues[200];
  FILE *pEngine ; //creo puntatare
  pEngine = fopen("engine.txt", "r") ; // apertura FILE
  if (pEngine == 0) // controllo che il file sia stato aperto bene
    {
      perror("Errore in apertura del file");
      exit(1);
    }
  else
    {
      printf("Lettura in corso...\n");
      
    }

  //fscanf(engineValues,200,pEngine);
  //printf("Number is: %d\n\n", engineValues);
  fclose(pEngine);


}
