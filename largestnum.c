#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("enter first number: ");
  scanf("%d",&num1);
  printf("enter second number:");
  scanf("%d",&num2);
  printf("enter third number:");
  scanf("%d",&num3);
  if(num1>num2){
    if(num1>num3){
      printf("%d is the largest",num1);}}
  else if (num2>num3){
      printf("%d is the largest",num2);}
  else{
    printf("%d is the largest",num3);
  }
    return 0;
}
