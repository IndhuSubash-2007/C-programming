#include<stdio.h>
int main(){
	int limit,i,item;
	printf("\n Enter no. of the element:");
	scanf("%d",&limit);
	int number[limit];
	printf("\n Enter the %d elements:",limit);
	for(i=0;i<limit;i++){
		scanf("%d",&number[i]);
	}
	printf("Enter element to search:");
	scanf("%d",&item);
	for(i=0;i<limit;i++){
		if(number[i]==item){
			printf("\n The given element found at position %d",i+1);
		}
	}
	return 0;
}
	
