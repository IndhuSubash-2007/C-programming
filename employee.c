#include <stdio.h>
struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d\n", i + 1);

        
        printf("Enter name: ");
        scanf("%s", employees[i].name);  
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

