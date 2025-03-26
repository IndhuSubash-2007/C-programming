#include<stdio.h>
int power(int num1, int num2) {
    if (num2 == 0) {
        return 1;
    } else {
        return num1 * power(num1, num2 - 1);
    }
}

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1); 
    printf("Enter num2: ");
    scanf("%d", &num2);

    int result = power(num1, num2);
    printf("Result is: %d\n", result);

    return 0;
}
