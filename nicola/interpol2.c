#include <stdio.h>
#include <stdlib.h>

float a[4]={1,3,5,8};
float c[4]={2,9,10,16};
float a1,a2,c1,c2;
int i=1;
int s=0;
float x,da,m,cx;
//float funz(float,float,float);

    float funz(float a[],float c[],float x){
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

int main(){
    printf("inserisci valore alpha\n");
    scanf("%f",&x);
    printf("\n");
    while(x<a[0] || x>a[3]){
        printf("[!]WARNING immettere valore alpha compreso nel range\n");
        scanf("%f",&x);
    }
    cx=funz(a,c,x);
    printf("il valore di cf è: %f\n",cx);
}
