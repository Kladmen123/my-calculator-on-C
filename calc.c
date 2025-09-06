#include<stdio.h>

int main() {
    int num1, num2;

    printf("dva chisla cherez probel: ");
    scanf("%d %d", &num1, &num2);

    printf("num1 + num2 = %d\n", num1 + num2);
    printf("num1 - num2 = %d\n", num1 - num2);
    printf("num1 * num2 = %d\n", num1 * num2);
    printf("num1 / num2 = %.2f\n", (float)num1 / num2);
}
