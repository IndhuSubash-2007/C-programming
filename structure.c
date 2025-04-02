#include<stdio.h>
struct student{
  int rollNo;
  char name[20];
  float cgpa;
}  
  main(){
  struct student s1;
  printf("\nEnter the roll number:");
  scanf("%d",&s1.rollNo);
  printf("\nEnter the name:");
  scanf("%s",s1.name);
  printf("\nEnter the CGPA:");
  scanf("%f",&s1.cgpa);
  printf("\nEnter the student details");
  printf("\nName: %s",s1.name);
  printf("\nRoll no:%d",s1.rollNo);
  printf("\nCGPA: %f",s1.cgpa);
}  

