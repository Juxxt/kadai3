#include <stdio.h>
#include "38sub.h"

float main(void){

  int p, q, i, j, k, l;
  int row=2, column=2;

  /* 行列 */
  float a[2][2], b[2][2], c[2][2], trans[2][2];


  a[0][0]=1.0;
  a[0][1]=3.0;
  a[1][0]=4.0;
  a[1][1]=2.0;

  b[0][0]=2.0;
  b[0][1]=1.0;
  b[1][0]=3.0;
  b[1][1]=2.0;

  x=Matrix_multiplication_3_8(a,b,c,trans);

  printf("AB = \n");

  for(i=0;i<column;++i){
    for(j=0;j<row;++j){
      
      printf("%f  ",trans[i][j]);
      if(j==row-1){
          printf("\n");
      }
    }
  }

  
  

  return 0;
}