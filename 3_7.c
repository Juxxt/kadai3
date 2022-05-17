#include <stdio.h>
#include "33sub.h"

double main(void){

  double inverce;
  int i, j, s, t, p, q;
  double c[2][2];

  /* 行列 */
  double b[2][2] = {
    {2,1},
    {3,2}};

  printf("%lf",b[1][0]);  

  Inverse_matrix_2x2(inverce,i, j, s, t, p, q, b, c);

  

  for(i=0;i<2;++i){
    for(j=0;j<2;++j){
      printf("C[%d][%d] = %lf\n", i+1, j+1, c[i][j]);
    }
  }


  return 0;
}