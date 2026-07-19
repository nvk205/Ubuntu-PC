//tinh toan 2 so a va b
#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);
    char phepToan;
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &phepToan);
    switch (phepToan)
    {
    case '+':
        printf("a + b = %d\n", a + b);
        break;
    case '-':
        printf("a - b = %d\n", a - b);
        break;
    case '*':
        printf("a * b = %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("a / b = %d\n", a / b);
        else
            printf("Error: Division by zero is not allowed.\n");
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }
    return 0;
}