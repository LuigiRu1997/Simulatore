//LETTURA FILE IN VETTORI DIVERSI

#include<stdlib.h>
#include<stdio.h>

int righe=116;
int i=0,j=0;
float alpha[120]; //inizializzo ogni vettore con un valore di elementi superiore a quelli da salvare
float cx[120];
float cy[120];
float cz[120];
float cl[120];
float cm[120];
float cn[120];

int main() {
  FILE *fd;
  fd=fopen("ciao.txt", "r"); //IN ESEMPIO PRENDO IL FILE CIAO.TXT

 //VERIFICA ERRORE IN APERTURA DEL FILE .TXT
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }

  //>
  for(j=0;j<righe;j++){
        fscanf(fd, "%f", &alpha[j]); //creo i vettori leggendo riga per riga
        fscanf(fd, "%f", &cx[j]);
        fscanf(fd, "%f", &cy[j]);
        fscanf(fd, "%f", &cz[j]);
        fscanf(fd, "%f", &cl[j]);
        fscanf(fd, "%f", &cm[j]);
        fscanf(fd, "%f", &cn[j]);
        printf("%f  %f  %f  %f  %f  %f  %f\n",alpha[j],cx[j],cy[j],cz[j],cl[j],cm[j],cn[j]);
}
fclose(fd);
}
