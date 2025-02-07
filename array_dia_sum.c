#include<stdio.h>
int main(){
  int row,col,sum;
  printf("Enter the row and column of a square matrix");
  scanf("%d%d",&row,&col);
  if(row==col){
    int matrix [row][col];
    printf("Enter the elements:");
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        scanf("%d",&matrix[i][j]);
        if(i==j){
          sum=sum+matrix[i][j];
        }
      }
    }
    printf("\n The given matrix is:\n");
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        printf("%d\t",matrix[i][j]);
      }
      printf("\n");
    }
    printf("Diagonal element's sum is:%d\n",sum);
  }
  else{
    printf("Enter a square matrix");
  }
  return 0;
}
