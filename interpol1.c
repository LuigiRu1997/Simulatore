#include <stdio.h>
#include <stdlib.h>

int a[4]={1,3,5,8};
int c[4]={2,9,10,16};
int a1,a2,c1,c2;
int i=1;
int s=0;
float x,da,m,cf;
float funz(float,float,float,float,float);

float funz(float x,float a1,float a2,float c1,float c2)
{
    da=x-a1;
    m=(c2-c1)/(a2-a1);
    cf=c1+(m*da);
    return cf;
}


int main()
{
    printf("inserisci valore alpha\n");
    scanf("%f",&x);
    printf("\n");
    while(x<a[0] || x>a[3])
    {
        printf("[!]WARNING immettere valore alpha compreso nel range. Reinserire:\n");
        scanf("%f",&x);
    }

    while(i)
    {
        if(x>=a[s] && x<=a[s+1])
        {
          a1=a[s];
          a2=a[s+1];
          c1=c[s];
          c2=c[s+1];
          i=0; //esce dal ciclo
        }
        else  { s++; }
      }
    cf=funz(x,a1,a2,c1,c2);
    printf("il valore di cf e': %f\n",cf);
}
