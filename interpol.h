
#ifndef INTERPOL_H_INCLUDED
#define INTERPOL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


float funz(double a[],double c[],float x){

float a1,a2,c1,c2;
int i=1;
int s=0;
float da,m,cx;

    while(i){
        if(x>=a[s] && x<=a[s+1]){
        a1=a[s];
        a2=a[s+1];
        c1=c[s];
        c2=c[s+1];
        i=0; }
        else{
            s++;
        }
    }
    da=x-a1;
    m=(c2-c1)/(a2-a1);
    cx=c1+(m*da);
    return cx;
}


#endif
