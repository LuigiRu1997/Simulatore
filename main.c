#include <stdio.h>
#include <stdlib.h>
#include "variabili.h"
#include "lettura_dba.h"
#include "interpol.h"


int main(){
float x,cas;

lettura_dba();

   printf("%f %f %lf\n\n",superficieAlare,aperturaAlare,alpha[2]); //VERIFICA PRESENZA VARIABILI GLOBALI


   //TEST FUNZIONE INTERPOL
printf("inserisci valore alpha\n"); //alpha inserito da utente
    scanf("%f",&x);
    printf("\n");
    while(x<alpha[0] || x>alpha[125]){ //verifico se alpha è nel range
        printf("[!]WARNING immettere valore alpha compreso nel range\n");
        scanf("%f",&x);
    }
    cas=funz(alpha,cx,x); //interpolazione
    printf("il valore di cas è: %f\n",cas);
 }
