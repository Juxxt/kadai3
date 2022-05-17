#include "38sub.h"



float Matrix_multiplication_3_8(float a[2][2], float b[2][2],float c[2][2], float trans[2][2]){

  int i, j, k, l, p, q, term, m, row=2, column=2;

//行列の積を求める

  for(k=0;k<2;++k){
    for(l=0;l<2;++l){
      c[k][l] = a[k][l] * b[k][l];

      // 行列の項を計算
      for(k=0;k<2;k++){
        for(l=0;l<2;l++){
          term = 0;
          for(m=0;m<2;m++)
            term = term + a[k][m]*b[m][l];
          c[k][l] = term;
        }
      }

    }

    
  }

 for(p=0;p<row;++p){
    for(q=0;q<column;++q){
     trans[p][q]=c[q][p];
    }
  }

  
 return trans[i][j];

}



float trans_AB(float c[2][2], float trans[2][2]){

  int p, q, k, l, row=2, column=2;

  for(k=0;k<row;++k){
    for(l=0;l<column;++l){
     trans[k][l]=c[l][k];
    }
  }

  
 return trans[p][q];
}

