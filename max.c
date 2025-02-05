#include<stdio.h>
int main(){
	int n,i,max,min,positionmax=1,positionmin=1;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int num[n];
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	max=num[0];
	min=num[0];
	for(i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
			positionmax=i+1;
		}
		if (num[i]<min){
			min=num[i];
			positionmin=i+1;
			}
	}
	printf("\n The maximum number is  %d in the position %d",max,positionmax);
	printf("\n The minimum number is %d in the position %d",min,positionmin);
	
	return 0;
}
