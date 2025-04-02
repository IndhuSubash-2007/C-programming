#include <stdio.h>

struct Student {
    char name[100];  
    int roll_no;     
    float marks[3];   
    float total;       
    float average;     
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

   
        printf("Enter name: ");
        scanf("%s", students[i].name);  
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);  

        printf("Enter marks for three subjects: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
        }

        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].average = students[i].total / 3.0;
    }

    printf("\nStudent Results:\n");
    printf("\n");
    printf("Name\t\tRoll Number\tTotal Marks\tAverage Marks\n");
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%.2f\n", students[i].name, students[i].roll_no, students[i].total, students[i].average);
    }

    return 0;
}

