#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

char nome1[100];
int i=1,j=1,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,l1=0,m1=0;
float passo;
double a[22];double b[6];double c[2];double alpha[126];double cx[126];double cy[126];double cz[126];double cl[126];double cm[126];double cn[126];
double cxa[126];double cxap[126];double cxu[126];double cxq[126];double cxb[126];double cxp[126];double cxr[126];
double cyb[126];double cybp[126];double cyp[126];double cyr[126];double cya[126];double cyq[126];
double czal[126];double czap[126];double czu[126];double czq[126];double czb[126];double czp[126];double czr[126];



int main(){
    FILE *fp;
    fp=fopen("dba.txt","r");

    if (fp==NULL){
        printf("Errore nell'apertura del file engine");
        return 1;
    }

    while(j){
            fgets(nome1,150,fp);
            if(i>3 && i<26){
                    sscanf(nome1,"%lf", &a[a1]);
                    printf("%lf\n",a[a1]);
                    a1++;
                    i++;
                    }
                else if( i>28 && i<35){
                    sscanf(nome1,"%lf", &b[b1]);
                    i++;
                    printf("%lf\n",b[b1]);
                    b1++;
                    }
                else if (i>37 && i<40){
                    sscanf(nome1,"%lf", &c[c1]);
                    i++;
                    printf("%lf\n",c[c1]);
                    c1++;
                    }
                else if (i>43 && i<170){
                    sscanf(nome1,"%lf%lf%lf%lf%lf%lf%lf",&alpha[d1],&cx[d1],&cy[d1],&cz[d1],&cl[d1],&cm[d1],&cn[d1]);
                    i++;
                    printf("%lf %lf %lf %lf %lf %lf %lf\n",alpha[d1],cx[d1],cy[d1],cz[d1],cl[d1],cm[d1],cn[d1]);
                    d1++;
                    }
                else if (i>175 && i<302){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%1f",&passo,&cxa[e1],&cxap[e1],&cxu[e1],&cxq[e1],&cxb[e1],&cxp[e1],&cxr[e1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf %lf\n",passo,cxa[e1],cxap[e1],cxu[e1],cxq[e1],cxb[e1],cxp[e1],cxr[e1]);
                    e1++;
                    }
                else if (i>305 && i<432){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf%1f",&passo,&cyb[f1],&cybp[f1],&cyp[f1],&cyr[f1],&cya[f1],&cyq[f1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf %1f\n",passo,cyb[f1],cybp[f1],cyp[f1],cyr[f1],cya[f1],cyq[f1]);
                    f1++;
                    }
                else if (i>435 && i<562){
                    sscanf(nome1,"%f%lf%lf%lf%lf%lf%lf",&passo,&czal[g1],&czap[g1],&czu[g1],&czq[g1],&czb[g1],&czp[g1],&czr[g1]);
                    i++;
                    printf("%f %lf %lf %lf %lf %lf %lf\n",passo,czal[g1],czap[g1],czu[g1],czq[g1],czb[g1],czp[g1],czr[g1]);
                    g1++;
                    }
                else if(i==562){ //riga vera finale è i==1214-2=1212
                    j=0;
                }
                else{
                printf("riga senza valori\n");
                i++;
                }
    }
    fclose(fp);
    }
