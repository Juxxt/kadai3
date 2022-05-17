#ifndef _33SUB_H_
#define _33SUB_H_

int sum31_c1_1(int a1_1, int b1_1, int c1_1);

double sum2(int a, int b, double c);

int factrial(int a,int b,int c);

int combination(int n, int r);

#endif 





int sum31_c1_2(int a1_2, int b1_2, int c1_2){

c1_2 = a1_2 + b1_2;

return c1_2;
}



int sum32_c1_1(int a1_1, int b1_1, int c1_1){

c1_1 = a1_1 * b1_1;

return c1_1;
}

int sum32_c1_2(int a1_2, int b1_2, int c1_2){

c1_2 = a1_2 * b1_2;

return c1_2;
}


int transs(int i,int j,int k, int l, int row, int column, int a[2][2], int trans[2][2]){
  for(k=0;k<row;++k){
    for(l=0;l<column;++l){
     trans[k][l]=a[l][k];
    }
  }
 return trans[i][j];
}

int Matrix_multiplication(int i, int j, int k, int l, int term, int m, int a[2][2], int x[2][1], int c[2][1] ){

  for(k=0;k<1;++k){
    for(l=0;l<1;++l){
      c[k][l] = a[k][l] * x[k][l];

      // 行列の項を計算
      for(k=0;k<2;k++){
        for(l=0;l<1;l++){
          term = 0;
          for(m=0;m<2;m++)
            term = term + a[k][m]*x[m][l];
          c[k][l] = term;
        }
      }

    }

    
  }


 return c[i][j];

}



int Matrix_multiplication_3_5(int i, int j, int k, int l, int term, int m, int a[2][2], int b[2][2], int c[2][2] ){

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

 return c[i][j];

}

int BxA(int p, int q, int i, int j, int k, int l, int m, int term, int a[2][2], int b[2][2], int c[2][2]){

  for(p=0;p<2;p++){
    for(q=0;q<2;q++){
      c[p][q]=a[p][q];
    }
  }

  for(p=0;p<2;p++){
    for(q=0;q<2;q++){
      a[p][q]=b[p][q];
    }
  }

  for(p=0;p<2;p++){
    for(q=0;q<2;q++){
      b[p][q]=c[p][q];
    }
  }

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

 return c[i][j];

} 




double Inverse_matrix_2x2(double inverce, int i, int j, int s, int t, int p, int q, double b[2][2], double c[2][2]){

  inverce = b[0][0] * b[1][1] - b[0][1] * b[1][0];

  for(p=0;p<2;p++){
    for(q=0;q<2;q++){
      c[p][q]=b[p][q]/inverce;
    }
  }

  return c[i][j];

}