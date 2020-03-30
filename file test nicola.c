#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  int j;
int a=37,b=7;


  FILE *file;
  file=fopen("test lettura in matrix.txt", "r");

 for(i = 0; i < a-1; i++)
  {
      for(j = 0; j < b-1; j++)
      {
        fscanf(file, "%c  ", &mat[i][j]))
        fprintf("%d ", mat[i][j])
      }
  }
  fclose(file);
}
