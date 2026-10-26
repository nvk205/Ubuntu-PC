//1. nhap 2 so nguyen va in ra tong
//2. Nhap 1 day so va in ra man hinh
#include<stdio.h>

int cau1(int a, int b){
    return a + b;
}

void cau2(int n){
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int a, b;
    int n;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    printf("Tong a va b: %d \n", cau1(a, b));
    printf("Nhap n: ");
    scanf("%d", &n);
    cau2(n);


}