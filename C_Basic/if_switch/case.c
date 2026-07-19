//tinh toan 2 so a va b
#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);
    char phepToan;
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &phepToan);
    switch(phepToan){
        case '+':
            printf("Tong cua hai so la: %d\n", a + b);
            break;
        case '-':
            printf("Hieu cua hai so la: %d\n", a - b);
            break;
        case '*':
            printf("Tich cua hai so la: %d\n", a * b);
            break;
        case '/':
            if(b != 0){        
                printf("Thuong cua hai so la: %.2f\n", (float)a / b);
            }else{
                printf("Khong the chia cho 0\n");
            }
            break;
        default:
            printf("Phep toan khong hop le\n");
    }
    return 0;
}