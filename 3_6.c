#include <stdio.h>
#include "33sub.h"

int main(void){

  int i, j, k, l, m, term;

  /* 行列 */
  int a[2][2], b[2][2], c[2][2];

  a[0][0]=1;
  a[0][1]=3;
  a[1][0]=4;
  a[1][1]=2;

  b[0][0]=2;
  b[0][1]=1;
  b[1][0]=3;
  b[1][1]=2;



  Matrix_multiplication_3_5(i, j, k, l, term,m,a,b,c );



  printf("\n行列 C = A x B\n");
  for(i=0;i<2;++i){
    for(j=0;j<2;++j){
      printf("C[%d][%d] = %d\n", i+1, j+1, c[i][j]);
    }
  }

  return 0;
}