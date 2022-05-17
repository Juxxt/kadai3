#include <stdio.h>
#include "33sub.h"

int main(void){

  int i, j, k, l, m, term;

  /* 行列 */
  int a[2][2], x[2][1], c[2][1];

  a[0][0]=1;
  a[0][1]=3;
  a[1][0]=4;
  a[1][1]=2;

  x[0][0]=5;
  x[1][0]=7;


  Matrix_multiplication(i, j, k, l, term,m,a,x,c );



  printf("\n行列 C = A x x\n");
  for(i=0;i<2;++i){
    for(j=0;j<1;++j){
      printf("C[%d][%d] = %d\n", i+1, j+1, c[i][j]);
    }
  }

  return 0;
}