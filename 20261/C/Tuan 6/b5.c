#include <stdio.h>

int nhap(){
    int a;
    printf("Nhap so nguyen: ");
    scanf("%d", &a);
    return a;
}

int sum(int a, int b){
    int tong = 0;
    for (int i = a; i <= b; i++)
    {
        tong = tong + i;
    }
    return tong;
}

void in(int a, int b, int c){
    printf("Tong tu %d den %d la %d", a, b, c);
}

int main(){
    int a, b;
    a = nhap();
    b = nhap();
    int c = sum(a, b);
    in(a, b, c);
    return 0;
}