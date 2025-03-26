#include<stdio.h>
#define n 3.14
int main(){
  int rCircle, rCyl, hCyl;
  float areaC, areaCyl;
  printf("Enter the radius of circle: ");
  scanf("%d",&rCircle);
  printf("Enter the radius of cylinder: ");
  scanf("%d",&rCyl);
  printf("Enter the height of cylinder: ");
  scanf("%d",&hCyl);
  areaC=n*rCircle*rCircle;
  printf("Area of Circle: %.2f\n",areaC);
  areaCyl=2*n*rCyl*(rCyl+hCyl);
  printf("Area of Cylinder: %.2f\n",areaCyl);
}
