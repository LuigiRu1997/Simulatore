#include <stdio.h>
#include <stdlib.h>

int main()
{
  char buf[200];
  char *res;
  int i=0;
  double  engineValues[7];
  FILE *pEngine ; //creo puntatare
  pEngine = fopen("engine.txt", "r") ; // apertura FILE
  if (pEngine == 0) //  controllo che il file sia stato aperto bene
  // se il puntatore non punta nulla allora genero ERRORE
    {
      perror("Errore in apertura del file");
      exit(1);
    }
  else // altrimenti eseguo la lettura
    {
      do // fai questa lettura finche il valore puntato non è nullo
        {
          res = fgets(buf,200,pEngine); //legge dal file pEngine la stringa e la
          //chiama buf, tutto si salva in un puntatore res
          if( buf[0] != '*' ) /*se il primo elemento di buf è diverso da * allora:
          leggi la stringa e salva il valore %floatingPoint in EngineValues*/
            {
              sscanf(buf, "%lf", &engineValues[i]);/*leggi la stringa e salva il valore
              %floatingPoint in EngineValues*/
              printf("%lf \n", engineValues[i]);
              i++;

            }
        }
      while(res != NULL);
    }

  //fscanf(pEngine,200,&y);
  //printf("Number is: %d\n\n", engineValues);
  fclose(pEngine); //chiude il file
  pEngine = NULL; //azzera il puntatore e libera la memoria
