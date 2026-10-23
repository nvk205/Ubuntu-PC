#include <stdio.h>

int dien(int a, int b){
    int n = b - a;
    if (n < 100){
        return n * 1000;
    }
    else if (100 <= n < 200)
    {
        return 99 * 1000 + (n - 100) * 1500;
    }
    else if (200 <= n < 300)
    {
        return 99 * 1000 + 99 * 1500 + (n - 200) * 2000;
    }
    else {
        return 99 * 1000 + 99 * 1500 + 99 * 2000 + (n - 300) * 2500;
    }
}

int main(){
    int a, b;
    do{
        printf("Nhap so dien dau thang: ");
        scanf("%d", &a);
        printf("Nhap so dien cuoi thang: ");
        scanf("%d", &b);
        if (a > b)
    {
        printf("Du lieu khong hop le! Vui long nhap lai!\n");
    }
    } while (a > b);
    printf("So tien dien: %d\n", dien(a, b));
    return 0;
}