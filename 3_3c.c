/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した行列の「転置行列」を表示 -
 */
#include <stdio.h>
#include "33sub.h"

int main(void){

  int i, j, k, l;

  /* 行列と行列 */
  int a[2][2], trans[2][2];

  /* 行と列 */
  int row=2, column=2;

  a[0][0]=5;
  a[1][0]=7;
  a[0][1]=2;
  a[1][1]=3;


  /* 入力した行列の表示 */
  printf("\nA = \n");
  for(i=0;i<row;++i){
    for(j=0;j<column;++j){
      printf("%d  ", a[i][j]);
      if(j==column-1)
          printf("\n");
    }
  }

  printf("\n");


  transs(i,j,k,l,row,column,a,trans);


  /* 転置行列の表示 */
  printf("転置行列 = \n");
  for(i=0;i<column;++i){
    for(j=0;j<row;++j){
      printf("%d  ",transs(i,j,k,l,row,column,a,trans));
      if(j==row-1)
          printf("\n");
    }
  }

  return 0;

}