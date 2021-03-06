
#ifndef LETTURA_DBA_INCLUDED
#define LETTURA_DBA_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "variabili.h"


void lettura_dba()
{

    char nome1[100]; //puntatore lettura riga
    int i=1,j=1,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,l1=0,m1=0,n1=0;
    double a[22];double b[6];double c[2];
    float passo;

    FILE *fp; //creazione puntatore
    fp=fopen("dba.txt","r"); //apertura file

    //controllo che il file sia aperto correttamente:
    if (fp==NULL){
        printf("Errore nell'apertura del file dba");
        return 1;
    }

    while(j)
    {
            fgets(nome1,150,fp); //legge massimo 150 caratteri dal file fp, memorizza ogni riga in una stringa ad ogni ciclo in nome1
            //Lettura dei parametri velivolo:
            if(i>3 && i<26){
                    sscanf(nome1,"%lf", &a[a1]);
                    printf("%lf\n",a[a1]);
                    a1++;
                    i++;
                    }
            //Lettura Deflections limits:
            else if( i>28 && i<35){
                    sscanf(nome1,"%lf", &b[b1]);
                    i++;
                    printf("%lf\n",b[b1]);
                    b1++;
                    }
            //Lettura Massa Combustibile:
            else if (i>37 && i<40){
                    sscanf(nome1,"%lf", &c[c1]);
                    i++;
                    printf("%lf\n",c[c1]);
                    c1++;
                    }
            //Lettura Steady State Coefficients:
            else if (i>43 && i<170){
                    sscanf(nome1,"%lf%lf%lf%lf%lf%lf%lf",&alpha[d1],&cx[d1],&cy[d1],&cz[d1],&cl[d1],&cm[d1],&cn[d1]);
                    i++;
                    printf("%lf %lf %lf %lf %lf %lf %lf\n",alpha[d1],cx[d1],cy[d1],cz[d1],cl[d1],cm[d1],cn[d1]);
                    d1++;
                    }
            //Lettura X force derivatives:
            else if (i>175 && i<302){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%1f",&passo,&cxa[e1],&cxap[e1],&cxu[e1],&cxq[e1],&cxb[e1],&cxp[e1],&cxr[e1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf %lf\n",passo,cxa[e1],cxap[e1],cxu[e1],cxq[e1],cxb[e1],cxp[e1],cxr[e1]);
                    e1++;
                    }
            //Lettura Y force derivatives :
            else if (i>305 && i<432){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%1f",&passo,&cyb[f1],&cybp[f1],&cyp[f1],&cyr[f1],&cya[f1],&cyq[f1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf %1f\n",passo,cyb[f1],cybp[f1],cyp[f1],cyr[f1],cya[f1],cyq[f1]);
                    f1++;
                    }
            //Lettura Z force derivatives :
            else if (i>435 && i<562){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%lf",&passo,&czal[g1],&czap[g1],&czu[g1],&czq[g1],&czb[g1],&czp[g1],&czr[g1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf %lf\n",passo,czal[g1],czap[g1],czu[g1],czq[g1],czb[g1],czp[g1],czr[g1]);
                    g1++;
                    }
            //Lettura Rolling Moment Derivatives:
            else if (i>565 && i<692){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf", &passo,&clb[h1],&clbp[h1],&clp[h1],&clr[h1],&cla[h1],&clq[h1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf\n",passo,clb[h1],clbp[h1],clp[h1],clr[h1],cla[h1],clq[h1] );
                    h1++;
                }
            //Lettura Pitching Moment Derivatives:
            else if (i>695 && i<822){
                  sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%lf", &passo,&cma[i1],&cmap[i1],&cmu[i1],&cmq[i1],&cmb[i1],&cmp[i1],&cmr[i1]);
                  i++;
                  printf("%f %lf %lf %lf %lf %lf %lf %lf\n",passo,cma[i1],cmap[i1],cmu[i1],cmq[i1],cmb[i1],cmp[i1],cmr[i1]);
                  i1++;
                }
            //Lettura Yawing Moment Derivatives:
            else if (i>825 && i<952){
                  sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf", &passo,&cnb[l1],&cnbp[l1],&cnp[l1],&cnr[l1],&cna[l1],&cnq[l1]);
                  i++;
                  printf("%f %lf %lf %lf %lf %lf %lf\n",passo,cnb[l1],cnbp[l1],cnp[l1],cnr[l1],cna[l1],cnq[l1]);
                  l1++;
                }
            //Lettura Control Force Derivatives:
            else if (i>955 && i<1082){
                  sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf", &passo,&cxde[m1],&cxdle[m1],&czde[m1],&czdle[m1],&cyda[m1],&cydr[m1]);
                  i++;
                  printf("%f %lf %lf %lf %lf %lf %lf\n", passo,cxde[m1],cxdle[m1],czde[m1],czdle[m1],cyda[m1],cydr[m1]);
                  m1++;
                }
            //Lettura Control Moment Derivatives:
            else if (i>1085 && i<1212){
                  sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf", &passo,&clda[n1],&cldr[n1],&cmde[n1],&cmdle[n1],&cnda[n1],&cndr[n1]);
                  i++;
                  printf("%f %lf %lf %lf %lf %lf %lf\n",passo,clda[n1],cldr[n1],cmde[n1],cmdle[n1],cnda[n1],cndr[n1]);
                  n1++;
                }
            //Uscita dal ciclo all'ultima riga:
            else if(i==1212){
                    printf("\n");
                    j=0;}
            //Lettura riga vuota
            else{
                printf("riga senza valori\n");
                i++;
                }
    }
    //chiusura file:

      fclose(fp);

    //RiassegnazioneParametriVelivolo:

    massa = a[0];
    aperturaAlare = a[1];
    superficieAlare = a[2];
    corda = a[3];
    mDragRise = a[4];
    dist1 = a[5];
    dist2 = a[6];
    dist3 = a[7];
    dtz = a[8];
    dty = a[9];
    incidenze = a[10];
    rotaryDeriv = a[11];
    cg = a[12];
    Jx = a[13];
    Jy = a[14];
    Jz = a[15];
    Jxz = a[16];
    opzPosBar = a[17];
    newPosBar = a[18];
    posx = a[19];
    posy = a[20];
    posz = a[21];
    //RiassegnazioneParametriDeflectionLimits:

      elevatorMax = b[0];
    elevatorMin = b[1];
    ailerons= b[2];
    rudder= b[3];
    flapMin= b[4];
    flapMax = b[5];

    //RiassegnazioneParametriMassaCombustibile:

    opzMassa = c[0];
    frazPesoComb = c[1];


    }


#endif
