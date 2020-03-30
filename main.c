#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *pEngine = fopen("engine.txt", "r"); //definito puntatore & apertura FILE
  if (pEngine == 0) // controllo che il file sia stato aperto bene
    {
      perror("Errore in apertura del file");
      exit(1);
    }

}
