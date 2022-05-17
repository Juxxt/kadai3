#include <stdio.h>
#include "33sub.h"

int main(void){


  /* 行列 */
  int a1_1=5;
  int a1_2=7;

  int b1_1=2;
  int b1_2=3;

  int c1_1, c1_2;

  sum32_c1_1(a1_1, b1_1, c1_1);
  sum32_c1_2(a1_2, b1_2, c1_2);

  printf("\n行列 C = A + B\n");
  printf("C1_1 = %d\n", sum32_c1_1(a1_1, b1_1, c1_1));
  printf("C1_2 = %d\n", sum32_c1_2(a1_2, b1_2, c1_2));
  

  return 0;
}