// Nhap hai so a va b, tinh tong, hieu, tich, thuong va du cua hai so do
#include <stdio.h>
int main(){
    int a, b, tong, hieu, tich, thuong, du;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    du = a % b;
    printf("Tong cua hai so la: %d\n", tong);
    printf("Hieu cua hai so la: %d\n", hieu);
    printf("Tich cua hai so la: %d\n", tich);
    printf("Thuong cua hai so la: %d\n", thuong);
    printf("Du cua hai so la: %d\n", du);
    return 0;
}